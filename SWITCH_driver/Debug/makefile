################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
LSS += \
SWITCH_driver.lss \

FLASH_IMAGE += \
SWITCH_driver.hex \

SIZEDUMMY += \
sizedummy \

AVRDUDEDUMMY += \
avrdudedummy \


# All Target
all: SWITCH_driver.elf secondary-outputs

# Tool invocations
SWITCH_driver.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,SWITCH_driver.map -mmcu=atmega32 -o "SWITCH_driver.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

SWITCH_driver.lss: SWITCH_driver.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S SWITCH_driver.elf  >"SWITCH_driver.lss"
	@echo 'Finished building: $@'
	@echo ' '

SWITCH_driver.hex: SWITCH_driver.elf
	@echo 'Create Flash image (ihex format)'
	-avr-objcopy -R .eeprom -R .fuse -R .lock -R .signature -O ihex SWITCH_driver.elf  "SWITCH_driver.hex"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: SWITCH_driver.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega32 SWITCH_driver.elf
	@echo 'Finished building: $@'
	@echo ' '

avrdudedummy: SWITCH_driver.elf
	@echo 'Invoking: AVRDude'
	/usr/bin/avrdude -pm32 -cusbasp -Uflash:w:SWITCH_driver.hex:a
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(FLASH_IMAGE)$(ELFS)$(OBJS)$(ASM_DEPS)$(AVRDUDEDUMMY)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) SWITCH_driver.elf
	-@echo ' '

secondary-outputs: $(LSS) $(FLASH_IMAGE) $(SIZEDUMMY) $(AVRDUDEDUMMY)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
