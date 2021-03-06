/*---------------------------------------------------------------------------------
07/06/2021
Alexandre Florentino
kanemaki@gmail.com	
---------------------------------------------------------------------------------*/
#include <snes.h>

extern char snesfont;

//---------------------------------------------------------------------------------
int main(void) {
    // Initialize SNES 
	consoleInit();
    
    // Initialize text console with our font
	consoleInitText(0, 0, &snesfont);

	// Now Put in 16 color mode and disable Bgs except current
	setMode(BG_MODE1,0);  bgSetDisable(1);  bgSetDisable(2);

	// Draw a wonderfull text :P
	consoleDrawText(6,10,"Alexandre Florentino !");
	consoleDrawText(6,14,"WELCOME TO PVSNESLIB");
	consoleDrawText(3,18,"HTTPS://WWW.PORTABLEDEV.COM");

	// Wait for nothing :P
	setScreenOn();  
	
	while(1) {
		WaitForVBlank();
	}
	return 0;
}