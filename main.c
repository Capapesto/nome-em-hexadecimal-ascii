#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"

int8_t contador = 2;




void app_main() {


  while (contador > -1) {
    printf("%c %c %c %c\n", 0x41, 0x41, 0x53, 0x41);
    contador--;

    }


  }
