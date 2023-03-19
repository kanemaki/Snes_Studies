/*---------------------------------------------------------------------------------
07/06/2021
Alexandre Florentino
kanemaki@gmail.com
---------------------------------------------------------------------------------*/
#include <snes.h>

extern char tilfont, palfont;

//---------------------------------------------------------------------------------
int main(void)
{
    // Initialize SNES
    consoleInit();

    // Initialize text console with our font
    consoleSetTextVramBGAdr(0x6800);
    consoleSetTextVramAdr(0x3000);
    consoleSetTextOffset(0x0100);
    consoleInitText(0, 16 * 2, &tilfont, &palfont);

    // Init background
    bgSetGfxPtr(0, 0x2000);
    bgSetMapPtr(0, 0x6800, SC_32x32);

    // Now Put in 16 color mode and disable Bgs except current
    setMode(BG_MODE1, 0);
    bgSetDisable(1);
    bgSetDisable(2);

    // Draw a wonderful text :P
    consoleDrawText(10, 10, "Alexandre Florentino!");
    consoleDrawText(10, 10, "_   _");
    consoleDrawText(10, 10, "((___))");
    consoleDrawText(10, 10, "[ x x ]");
    consoleDrawText(10, 10, "\\   /");
    consoleDrawText(10, 10, "(' ')");
    consoleDrawText(10, 10, "(U)");
    consoleDrawText(6, 14, "WELCOME TO PVSNESLIB");
    consoleDrawText(3, 18, "HTTPS://WWW.PORTABLEDEV.COM");

    // Wait for nothing :P
    setScreenOn();

    while (1)
    {
        WaitForVBlank();
    }
    return 0;
}