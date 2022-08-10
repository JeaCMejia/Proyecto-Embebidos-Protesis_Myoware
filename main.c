#include <stdio.h>
#include "esp_system.h"
#include "freertos/freeRTOS.h"
#include "freertos/task.h"
#include "driver/adc.h"
#include "esp_adc_cal.h"
#include <unistd.h>

//#if CONFIG_IDF_TARGET_ESP32
static const adc1_channel_t channel = ADC1_CHANNEL_5;
static const adc_bits_width_t width = ADC_WIDTH_BIT_12;
//#endif

static const adc_atten_t atten = ADC_ATTEN_DB_11;

void app_main(void)
{
    adc1_config_width(width);
    adc1_config_channel_atten(channel, atten);
    uint32_t adc_reading = 0;
   
    while (1) {
        adc_reading = adc1_get_raw(channel);
        printf("%d\n", adc_reading);
        vTaskDelay(1);
    }
}