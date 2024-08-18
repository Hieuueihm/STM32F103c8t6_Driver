MAIN_DIR = Application
START_UP_DIR = Startup
DRIVER_DIR = Driver
SRC_DIR = $(DRIVER_DIR)/Src
INC_DIR = $(DRIVER_DIR)/Inc

OBJ_DIR = Objects
BUILD_DIR = Build

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)


# Source and object files
SOURCES  = ${MAIN_DIR}/main.c
SOURCES += ${START_UP_DIR}/startup_stm32f103c8tx.s
SOURCES += $(wildcard ${SRC_DIR}/*.c)

OBJS = $(patsubst %.c, $(OBJ_DIR)/%.o, $(patsubst %.s, $(OBJ_DIR)/%.o, $(notdir $(SOURCES))))

# Name for output binary files
PROJECT ?= main

# Compiler, objcopy (should be in PATH)
CC = arm-none-eabi-gcc
OBJCOPY = arm-none-eabi-objcopy

# Path to st-flash (or should be specified in PATH)
ST_FLASH ?= /usr/local/bin/st-flash

# Specify compiler flags
CFLAGS  = -g -O2 -Wall
CFLAGS += -TSTM32F103C8TX_FLASH.ld
CFLAGS += -mlittle-endian -mthumb -mcpu=cortex-m4 -mthumb-interwork
CFLAGS += -mfloat-abi=hard -mfpu=fpv4-sp-d16
CFLAGS += -DSTM32F10X_MD -DUSE_STDPERIPH_DRIVER
CFLAGS += -I$(INC_DIR) 
CFLAGS += -Wl,--gc-sections

FL_ADDR ?= 0x8000000

build: $(BUILD_DIR)/$(PROJECT).elf $(ASSEMBLY_DIR)

# Compile
$(BUILD_DIR)/$(PROJECT).elf: $(OBJ_DIR) $(BUILD_DIR) $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@
	$(OBJCOPY) -O ihex $(BUILD_DIR)/$(PROJECT).elf $(BUILD_DIR)/$(PROJECT).hex
	$(OBJCOPY) -O binary $(BUILD_DIR)/$(PROJECT).elf $(BUILD_DIR)/$(PROJECT).bin

# Create object files
$(OBJ_DIR)/%.o: $(MAIN_DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR)/%.o: $(START_UP_DIR)/%.s
	$(CC) $(CFLAGS) -c $< -o $@



clean:
	rm -f $(OBJ_DIR)/*.o $(BUILD_DIR)/*.elf $(BUILD_DIR)/*.bin $(BUILD_DIR)/*.hex 

# Flash
flash: $(BUILD_DIR)/$(PROJECT).bin
	sudo $(ST_FLASH) write $(BUILD_DIR)/$(PROJECT).bin ${FL_ADDR}

.PHONY: build clean flash
