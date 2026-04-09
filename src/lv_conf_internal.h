#warning Include public headers from the `src` folder is deprecated. This file will be removed soon. To ensure your application keeps working, you can choose to include the new header in <include/lvgl/config/lv_conf_internal.h> or include the main header file <include/lvgl/lvgl.h>
#include "../include/lvgl/lvgl.h"
    #ifndef LV_GIF_MAX_WIDTH
        #ifdef CONFIG_LV_GIF_MAX_WIDTH
            #define LV_GIF_MAX_WIDTH CONFIG_LV_GIF_MAX_WIDTH
        #else
            #define LV_GIF_MAX_WIDTH 32768
        #endif
    #endif
    #ifndef LV_GIF_MAX_HEIGHT
        #ifdef CONFIG_LV_GIF_MAX_HEIGHT
            #define LV_GIF_MAX_HEIGHT CONFIG_LV_GIF_MAX_HEIGHT
        #else
            #define LV_GIF_MAX_HEIGHT 32768
        #endif
    #endif
