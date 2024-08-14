PROJECT ?= main
APP_DIR = Application
DRIVER_INC_DIR = Driver/Inc
DRIVER_SRC_DIR = Driver/Src
OBJ_DIR = Objects

CC = arm-none-eabi-gcc
OBJCOPY = arm-none-eabi-objcopy
ST_FLASH ?= /usr/local/bin/st-flash
GCC = gcc

CFLAGS  = -g -O2 -Wall -T/stm32f103.ld -I$(DRIVER_INC_DIR) -mcpu=cortex-m3 -mthumb
LDFLAGS = -Tstm32f103.ld -nostartfiles -mcpu=cortex-m3 -mthumb

MAIN_SRC = $(APP_DIR)/main.c
DRIVER_SRC = $(wildcard $(DRIVER_SRC_DIR)/*.c)
OBJS = $(addprefix $(OBJ_DIR)/,$(notdir $(MAIN_SRC:.c=.o) $(DRIVER_SRC:.c=.o)))

OUTPUT ?= $(APP_DIR)/$(PROJECT)
BASEADDR ?= 0x8000000

all: $(OUTPUT).elf $(APP_DIR)/$(PROJECT).bin

$(OUTPUT).elf: $(OBJS)
	$(CC) $(LDFLAGS) -o $@ $^

$(OBJ_DIR)/%.o: $(APP_DIR)/%.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR)/%.o: $(DRIVER_SRC_DIR)/%.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(OUTPUT).bin: $(OUTPUT).elf
	$(OBJCOPY) -O binary $< $@

clean:
	rm -rf $(APP_DIR)/*.elf $(APP_DIR)/*.bin $(OBJ_DIR) 

burn: $(OUTPUT).bin
	sudo $(ST_FLASH) write $< $(BASEADDR)

.PHONY: clean all burn
