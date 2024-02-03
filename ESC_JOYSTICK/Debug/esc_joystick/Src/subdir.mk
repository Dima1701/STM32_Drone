################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../esc_joystick/Src/ESC.c \
../esc_joystick/Src/Joystick.c \
../esc_joystick/Src/printfunc.c 

OBJS += \
./esc_joystick/Src/ESC.o \
./esc_joystick/Src/Joystick.o \
./esc_joystick/Src/printfunc.o 

C_DEPS += \
./esc_joystick/Src/ESC.d \
./esc_joystick/Src/Joystick.d \
./esc_joystick/Src/printfunc.d 


# Each subdirectory must supply rules for building sources it contributes
esc_joystick/Src/%.o esc_joystick/Src/%.su esc_joystick/Src/%.cyclo: ../esc_joystick/Src/%.c esc_joystick/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F746xx -c -I../Core/Inc -I"C:/Users/dimak/STM32CubeIDE/Drone/ESC_JOYSTICK/esc_joystick/Inc" -I../Drivers/STM32F7xx_HAL_Driver/Inc -I../Drivers/STM32F7xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F7xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-esc_joystick-2f-Src

clean-esc_joystick-2f-Src:
	-$(RM) ./esc_joystick/Src/ESC.cyclo ./esc_joystick/Src/ESC.d ./esc_joystick/Src/ESC.o ./esc_joystick/Src/ESC.su ./esc_joystick/Src/Joystick.cyclo ./esc_joystick/Src/Joystick.d ./esc_joystick/Src/Joystick.o ./esc_joystick/Src/Joystick.su ./esc_joystick/Src/printfunc.cyclo ./esc_joystick/Src/printfunc.d ./esc_joystick/Src/printfunc.o ./esc_joystick/Src/printfunc.su

.PHONY: clean-esc_joystick-2f-Src

