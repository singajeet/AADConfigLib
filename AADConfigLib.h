// Only modify this file to include
// - function definitions (prototypes)
// - include files
// - extern variable definitions
// In the appropriate section

#ifndef _AADConfigLib_H_
#define _AADConfigLib_H_
#include "Arduino.h"
//add your includes for the project AADConfigLib here

#define CONF_LCD_DRIVER new AADNokia1616LCDDriver();
#define CONF_DEFAULT_FONT new AADFontsLibDefault8x15();
#define TITLE_PANE_DEFAULT_HEIGHT 10
#define CONF_MAX_WIDGETS 10
#define CONF_MAX_PANELS 5




//Do not add code below this line
#endif /* _AADConfigLib_H_ */
