PROJECT ?= main
APP_DIR = Application
DRIVER_INC_DIR = Driver/Inc
DRIVER_SRC_DIR = Driver/Src

CC = arm-none-eabi-gcc
OBJCOPY = arm-none-eabi-objcopy
ST_FLASH ?= /usr/local/bin/st-flash
GCC = gcc

CFLAGS  = -g -O2 -Wall -T$(APP_DIR)/stm32f103.ld -I$(DRIVER_INC_DIR) -mcpu=cortex-m3 -mthumb
LDFLAGS = -Tstm32f103.ld -nostartfiles -mcpu=cortex-m3 -mthumb

MAIN_SRC = $(APP_DIR)/main.c
DRIVER_SRC = $(wildcard $(DRIVER_SRC_DIR)/*.c)
OBJS = $(MAIN_SRC:.c=.o) $(DRIVER_SRC:.c=.o)

OUTPUT ?= $(APP_DIR)/$(PROJECT)
BASEADDR ?= 0x8000000

all: $(OUTPUT).elf $(APP_DIR)/$(PROJECT).bin

$(OUTPUT).elf: $(OBJS)
	$(CC) $(LDFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(OUTPUT).bin: $(OUTPUT).elf
	$(OBJCOPY) -O binary $< $@

clean:
	rm -f $(APP_DIR)/*.elf $(APP_DIR)/*.o $(APP_DIR)/*.bin $(DRIVER_SRC_DIR)/*.o $(DRIVER_INC_DIR)/*.o

burn: $(OUTPUT).bin
	sudo $(ST_FLASH) write $< $(BASEADDR)
