
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/event_groups.h"
#include "esp_system.h"
#include "esp_wifi.h"
#include "esp_event_loop.h"
#include "esp_log.h"
#include "nvs_flash.h"

#include "spiram_fifo.h"
#include "app_main.h"

#define TAG "main"

static void init_hardware() 
{
    nvs_flash_init();
    if(!spiRamFifoInit()) 
    {
        printf("\n\nSPI RAM chip fail!\n");
        while(1);
    }
    ESP_LOGI(TAG, "hardware initialized");
}

void app_main(void)
{
    ESP_LOGI(TAG, "starting app_main()");
    ESP_LOGI(TAG, "RAM left %d", esp_get_free_heap_size());

    init_hardware();  
}   
