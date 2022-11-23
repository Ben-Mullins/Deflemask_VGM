/**
 * Hello World Example
 * Created With Genesis-Code extension for Visual Studio Code
 * Use "Genesis Code: Compile" command to compile this program.
 **/
#include <genesis.h>
#include <resources.h>

int main()
{
    VDP_drawText("Hello Sega!!", 10,13);
    XGM_setLoopNumber(-1);
    XGM_startPlay(deflemask);
    //XGM_startPlay(VGMMusicMaker);
    while(1)
    {
        //For versions prior to SGDK 1.60 use VDP_waitVSync instead.
        SYS_doVBlankProcess();
    }
    return (0);
}
