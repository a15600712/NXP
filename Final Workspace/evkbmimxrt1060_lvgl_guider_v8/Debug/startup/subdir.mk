################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../startup/startup_mimxrt1062.cpp 

CPP_DEPS += \
./startup/startup_mimxrt1062.d 

OBJS += \
./startup/startup_mimxrt1062.o 


# Each subdirectory must supply rules for building sources it contributes
startup/%.o: ../startup/%.cpp startup/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C++ Compiler'
	arm-none-eabi-c++ -std=gnu++11 -DCPU_MIMXRT1062DVL6B -DCPU_MIMXRT1062DVL6B_cm7 -DMCUXPRESSO_SDK -DSERIAL_PORT_TYPE_UART=1 -DSDK_DEBUGCONSOLE=1 -D__MCUXPRESSO -D__USE_CMSIS -DDEBUG -D__NEWLIB__ -I"C:\NXP\GUI-Guider-Projects\Password\sdk\Core\source" -I"C:\NXP\GUI-Guider-Projects\Password\sdk\Core\video" -I"C:\NXP\GUI-Guider-Projects\Password\sdk\Core\drivers" -I"C:\NXP\GUI-Guider-Projects\Password\sdk\Core\utilities" -I"C:\NXP\GUI-Guider-Projects\Password\sdk\Core\component\gpio" -I"C:\NXP\GUI-Guider-Projects\Password\sdk\Core\sdmmc\inc" -I"C:\NXP\GUI-Guider-Projects\Password\sdk\Core\sdmmc\host" -I"C:\NXP\GUI-Guider-Projects\Password\sdk\Core\fatfs\source" -I"C:\NXP\GUI-Guider-Projects\Password\sdk\Core\fatfs\source\fsl_sd_disk" -I"C:\NXP\GUI-Guider-Projects\Password\sdk\Core\openh264\codec\decoder\core\inc" -I"C:\NXP\GUI-Guider-Projects\Password\sdk\Core\openh264\codec\decoder\plus\inc" -I"C:\NXP\GUI-Guider-Projects\Password\sdk\Core\device" -I"C:\NXP\GUI-Guider-Projects\Password\sdk\Core\component\uart" -I"C:\NXP\GUI-Guider-Projects\Password\sdk\Core\component\lists" -I"C:\NXP\GUI-Guider-Projects\Password\sdk\Core\xip" -I"C:\NXP\GUI-Guider-Projects\Password\sdk\Core\CMSIS" -I"C:\NXP\GUI-Guider-Projects\Password\sdk\Core\sdmmc\osa" -I"C:\NXP\GUI-Guider-Projects\Password\sdk\Core\component\osa" -I"C:\NXP\GUI-Guider-Projects\Password\sdk\Core\freertos\freertos-kernel\include" -I"C:\NXP\GUI-Guider-Projects\Password\sdk\Core\freertos\freertos-kernel\portable\GCC\ARM_CM4F" -I"C:\NXP\GUI-Guider-Projects\Password\sdk\Core\openh264\codec\api\svc" -I"C:\NXP\GUI-Guider-Projects\Password\sdk\Core\openh264\codec\common\inc" -I"C:\NXP\GUI-Guider-Projects\Password\sdk\Core\board" -I"C:\NXP\GUI-Guider-Projects\Password\sdk\Core\source\freertos_libraries\abstractions\posix\include" -I"C:\NXP\GUI-Guider-Projects\Password\sdk\Core\source\freertos_libraries\freertos_plus\standard\freertos_plus_posix\include" -I"C:\NXP\GUI-Guider-Projects\Password\sdk\Core\source\freertos_libraries\c_sdk\standard\common\include\private" -I"C:\NXP\GUI-Guider-Projects\Password\sdk\Core\touchpanel" -I"C:\NXP\GUI-Guider-Projects\Password\sdk\Core\lvgl" -I"C:\NXP\GUI-Guider-Projects\Password\sdk\Core\lvgl\lvgl" -I"C:\NXP\GUI-Guider-Projects\Password\sdk\Core\lvgl\lvgl\src" -I"C:\NXP\GUI-Guider-Projects\Password\sdk\Core\lvgl\lvgl\src\font" -I"C:\NXP\GUI-Guider-Projects\Password\sdk\Core\component\serial_manager" -I"C:\NXP\GUI-Guider-Projects\Password\custom" -I"C:\NXP\GUI-Guider-Projects\Password\generated" -I"C:\NXP\GUI-Guider-Projects\Password\generated\guider_customer_fonts" -I"C:\NXP\GUI-Guider-Projects\Password\generated\guider_fonts" -I"C:\NXP\GUI-Guider-Projects\Password\sdk\Core\rlottie" -O0 -fno-common -g3 -gdwarf-4 -Wall -c -ffunction-sections -fdata-sections -ffreestanding -fno-builtin -fno-rtti -fno-exceptions -Wno-format -fmerge-constants -fmacro-prefix-map="$(<D)/"= -mcpu=cortex-m7 -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -D__NEWLIB__ -fstack-usage -specs=nano.specs -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-startup

clean-startup:
	-$(RM) ./startup/startup_mimxrt1062.d ./startup/startup_mimxrt1062.o

.PHONY: clean-startup

