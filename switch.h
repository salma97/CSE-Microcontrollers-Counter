#ifndef SWITCH_H_
#define SWITCH_H_

#include "port.h"
#include "DIO.h"




// This function is used to initialize the switch; by initializing a port for it and declaring its bit as I/p
void Switch_Init_Down(uint8 port_index, uint8 pins_mask);
void Switch_Init_Up(uint8 port_index, uint8 pins_mask);
// This function reads whether the switch is pressed or not
void Switch_HandleOnLevel(uint8 port_index, uint8 pins_mask);

void Switch_HandleOnPress(uint8 port_index, uint8 pins_mask);
void Switch_HandleOnRelease(uint8 port_index, uint8 pins_mask);


#endif
