#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "/usr/local/include/songlib/util.h"
#include "/usr/local/include/songlib/songlib.h"

#define dir "/usr/local/share/samples/"
#define base "drums"

/* change PROGRAM_NAME and PROGRAM_VERSION appropriately */

char *PROGRAM_NAME = "drums";
char *PROGRAM_VERSION = "0.01";

void intro(int);
void verse(int);
void bridge(int);
void chorus(int);

int
main()
    {
    int instrument;
    //int octave = 4;
    int spot;

    songInit();

    instrument = readScale(dir,base);

    setTempo(125);
    setTime(4,4);
    setStride(0.05);
    setSustain(0.99995);
    setAmplitude(0.187);

    openOutput("drums.rra",0,0);

    intro (spot);
    verse (spot);
    chorus(spot);
    verse (spot);
    chorus(spot);
    bridge(spot);
    verse (spot);
    chorus(spot);
    verse (spot);
    chorus(spot);

    closeOutput();

    return 0;
}


void intro(int spot)
{
    
    spot = getLocation();
    //                    1-&-2-&-3-&-4-&-
    drumkitHHClosed (1,1,"x-x-x-----------",SX); setLocation(spot);
    drumkitCrash(1,1,    "------------x---",SX); setLocation(spot);
    drumkitKick (1,1,    "x-x-x-----xx----",SX); setLocation(spot);
    drumkitSnare (1,1,   "------------x---",SX);
    


    spot = getLocation();
    //                    1-&-2-&-3-&-4-&-
    drumkitCrash(1,1,    "----------------",SX); setLocation(spot);
    drumkitHHClosed (1,1,"----x-x-x-x---x-",SX); setLocation(spot);
    drumkitHHOpen (1,1,  "------------x---",SX); setLocation(spot);
    drumkitKick (1,2,    "----x-----xx--x-",SX); setLocation(spot);
    drumkitSnare (1,1,   "------------x---",SX); 

    spot = getLocation();
    //                    1-&-2-&-3-&-4-&-
    drumkitCrash(1,1,    "----------------",SX); setLocation(spot);
    drumkitHHOpen (1,1,  "x-----------x---",SX); setLocation(spot);
    drumkitHHClosed (1,1,"--x-x-x-x-x-----",SX); setLocation(spot);
    drumkitKick (1,1,    "--x-x-x---xx----",SX); setLocation(spot);
    drumkitSnare (1,1,   "x-----------x---",SX); setLocation(spot);
    drumkitTomHi (1,1,   "--------------xx",SX); setLocation(spot);
    drumkitTom (1,1,     "----------------",SX); setLocation(spot);
    drumkitTomLo (1,1,   "----------------",SX); 

    spot = getLocation();
    //                    1-&-2-&-3-&-4-&-
    drumkitCrash(1,1,    "----------------",SX); setLocation(spot);
    drumkitHHOpen (1,1,  "----------------",SX); setLocation(spot);
    drumkitHHClosed (1,1,"----x-x-x-------",SX); setLocation(spot);
    drumkitKick (1,1,    "----x-x-x-------",SX); setLocation(spot);
    drumkitSnare (1,1,   "----------------",SX); setLocation(spot);
    drumkitTomHi (1,1,   "----------------",SX); setLocation(spot);
    drumkitTom (1,1,     "x---------------",SX); setLocation(spot);
    drumkitTomLo (1,1,   "--x-------------",SX);

    spot = getLocation();
    //                    1-&-2-&-3-&-4-&-
    drumkitCrash(1,1,    "--------x-------",SX); setLocation(spot);
    drumkitHHOpen (1,1,  "----------------",SX); setLocation(spot);
    drumkitHHClosed (1,1,"----------x-x-x-",SX); setLocation(spot);
    drumkitKick (1,1,    "--x-x-x-x-----xx",SX); setLocation(spot);
    drumkitSnare (1,1,   "xx--------------",SX); setLocation(spot);
    drumkitTomHi (1,1,   "--x-------------",SX); setLocation(spot);
    drumkitTom (1,1,     "----x-----------",SX); setLocation(spot);
    drumkitTomLo (1,1,   "------x---------",SX); 

    spot = getLocation();
    //                    1-&-2-&-3-&-4-&-
    drumkitCrash(1,1,    "----------------",SX); setLocation(spot);
    drumkitHHOpen (1,1,  "x-x-x-----------",SX); setLocation(spot);
    drumkitHHClosed (1,1,"------x-x-x-x-x-",SX); setLocation(spot);
    drumkitKick (1,1,    "-----x-xx-x---x-",SX); setLocation(spot);
    drumkitSnare (1,1,   "x-x-x-----------",SX); setLocation(spot);
    drumkitTomHi (1,1,   "----------------",SX); setLocation(spot);
    drumkitTom (1,1,     "----------------",SX); setLocation(spot);
    drumkitTomLo (1,1,   "----------------",SX);


    spot = getLocation();
    //                    1-&-2-&-3-&-4-&-
    drumkitCrash(1,1,    "----------------",SX); setLocation(spot);
    drumkitHHOpen (1,1,  "x---x-----------",SX); setLocation(spot);
    drumkitHHClosed (1,1,"--x---x---------",SX); setLocation(spot);
    drumkitKick (1,1,    "-x-x--x-x--x----",SX); setLocation(spot);
    drumkitSnare (1,1,   "x---x----xx-x---",SX); setLocation(spot);
    drumkitTomHi (1,1,   "-------------x--",SX); setLocation(spot);
    drumkitTom (1,1,     "--------------x-",SX); setLocation(spot);
    drumkitTomLo (1,1,   "---------------x",SX); 
}

void verse(int spot)
{
    int i;
    for (i = 0; i < 8; i++)
    {

        if (i == 3) {

            spot = getLocation();
            //                    1-&-2-&-3-&-4-&-
            drumkitCrash(1,1,    "----------------",SX); setLocation(spot);
            drumkitHHOpen (1,1,  "----------------",SX); setLocation(spot);
            drumkitHHClosed (1,1,"xxxxxxxx-xx-xx-x",SX); setLocation(spot);
            drumkitKick (1,1,    "x-x---x---x---x-",SX); setLocation(spot);
            drumkitSnare (1,1,   "--------xx--xx--",SX); setLocation(spot);
            drumkitTomHi (1,1,   "----------------",SX); setLocation(spot);
            drumkitTom (1,1,     "----------------",SX); setLocation(spot);
            drumkitTomLo (1,1,   "----------------",SX);

        }

        else if (i == 7) {

            spot = getLocation();
            //                    1-&-2-&-3-&-4-&-
            drumkitCrash(1,1,    "----------------",SX); setLocation(spot);
            drumkitHHOpen (1,1,  "----------------",SX); setLocation(spot);
            drumkitHHClosed (1,1,"----------------",SX); setLocation(spot);
            drumkitKick (1,1,    "x---x--x--x-----",SX); setLocation(spot);
            drumkitSnare (1,1,   "--x-----x-------",SX); setLocation(spot);
            drumkitTomHi (1,1,   "--x-----x--x----",SX); setLocation(spot);
            drumkitTom (1,1,     "-----x------xx--",SX); setLocation(spot);
            drumkitTomLo (1,1,   "------x-------xx",SX);

        }

        else {

            spot = getLocation();
            //                    1-&-2-&-3-&-4-&-
            drumkitCrash(1,1,    "----------------",SX); setLocation(spot);
            drumkitHHOpen (1,1,  "----------------",SX); setLocation(spot);
            drumkitHHClosed (1,1,"xxxxxxxx-xx-xx-x",SX); setLocation(spot);
            drumkitKick (1,1,    "x-x---x--x--x---",SX); setLocation(spot);
            drumkitSnare (1,1,   "--------x--x--x-",SX); setLocation(spot);
            drumkitTomHi (1,1,   "----------------",SX); setLocation(spot);
            drumkitTom (1,1,     "----------------",SX); setLocation(spot);
            drumkitTomLo (1,1,   "----------------",SX);

        }
    }
}

void chorus(int spot)
{
    int i;
    for (i = 0; i < 2; i++) {

        spot = getLocation();
        //                    1-&-2-&-3-&-4-&-
        drumkitCrash(1,1,    "x---------------",SX); setLocation(spot);
        drumkitHHOpen (1,1,  "----------------",SX); setLocation(spot);
        drumkitHHClosed (1,1,"--x-x-x-x-x-x-x-",SX); setLocation(spot);
        drumkitKick (1,1,    "x-x---x---------",SX); setLocation(spot);
        drumkitSnare (1,1,   "--------x---x---",SX); setLocation(spot);
        drumkitTomHi (1,1,   "----------------",SX); setLocation(spot);
        drumkitTom (1,1,     "----------------",SX); setLocation(spot);
        drumkitTomLo (1,1,   "----------------",SX);

        spot = getLocation();
        //                    1-&-2-&-3-&-4-&-
        drumkitCrash(1,1,    "----------------",SX); setLocation(spot);
        drumkitHHOpen (1,1,  "------------x---",SX); setLocation(spot);
        drumkitHHClosed (1,1,"x-x-x-x-x-x---x-",SX); setLocation(spot);
        drumkitKick (1,1,    "--x---x---x-x---",SX); setLocation(spot);
        drumkitSnare (1,1,   "x-------x-------",SX); setLocation(spot);
        drumkitTomHi (1,1,   "----------------",SX); setLocation(spot);
        drumkitTom (1,1,     "----------------",SX); setLocation(spot);
        drumkitTomLo (1,1,   "----------------",SX);

        spot = getLocation();
        //                    1-&-2-&-3-&-4-&-
        drumkitCrash(1,1,    "----------------",SX); setLocation(spot);
        drumkitHHOpen (1,1,  "----------------",SX); setLocation(spot);
        drumkitHHClosed (1,1,"x-x-x-x-x-x-x-x-",SX); setLocation(spot);
        drumkitKick (1,1,    "x---x-x---------",SX); setLocation(spot);
        drumkitSnare (1,1,   "--------x-x-x---",SX); setLocation(spot);
        drumkitTomHi (1,1,   "----------------",SX); setLocation(spot);
        drumkitTom (1,1,     "----------------",SX); setLocation(spot);
        drumkitTomLo (1,1,   "----------------",SX);

        if (i == 0) {

            spot = getLocation();
            //                    1-&-2-&-3-&-4-&-
            drumkitCrash(1,1,    "----------------",SX); setLocation(spot);
            drumkitHHOpen (1,1,  "----------------",SX); setLocation(spot);
            drumkitHHClosed (1,1,"x-x-x-x-x-------",SX); setLocation(spot);
            drumkitKick (1,1,    "x-----x---------",SX); setLocation(spot);
            drumkitSnare (1,1,   "--x-----x-------",SX); setLocation(spot);
            drumkitTomHi (1,1,   "----------x-----",SX); setLocation(spot);
            drumkitTom (1,1,     "-----------x----",SX); setLocation(spot);
            drumkitTomLo (1,1,   "------------x-x-",SX);

        }

        else {

            spot = getLocation();
            //                    1-&-2-&-3-&-4-&-
            drumkitCrash(1,1,    "----------------",SX); setLocation(spot);
            drumkitHHOpen (1,1,  "----------------",SX); setLocation(spot);
            drumkitHHClosed (1,1,"----------------",SX); setLocation(spot);
            drumkitKick (1,1,    "x---x---x-------",SX); setLocation(spot);
            drumkitSnare (1,1,   "--x---x---x-x-x-",SX); setLocation(spot);
            drumkitTomHi (1,1,   "--x-------------",SX); setLocation(spot);
            drumkitTom (1,1,     "------x---------",SX); setLocation(spot);
            drumkitTomLo (1,1,   "----------x-x-x-",SX);

        }

    }
}

void bridge(int spot) {

    int i;
    for(i = 0; i < 2; i++) {
        spot = getLocation();
        //                    1-&-2-&-3-&-4-&-
        drumkitCrash(1,1,    "x---------------",SX); setLocation(spot);
        drumkitHHOpen (1,1,  "----x-------x---",SX); setLocation(spot);
        drumkitHHClosed (1,1,"----------------",SX); setLocation(spot);
        drumkitKick (1,1,    "x-----x---x-x---",SX); setLocation(spot);
        drumkitSnare (1,1,   "--------x-------",SX); setLocation(spot);
        drumkitTomHi (1,1,   "----------------",SX); setLocation(spot);
        drumkitTom (1,1,     "----------------",SX); setLocation(spot);
        drumkitTomLo (1,1,   "----------------",SX);

        spot = getLocation();
        //                    1-&-2-&-3-&-4-&-
        drumkitCrash(1,1,    "----------------",SX); setLocation(spot);
        drumkitHHOpen (1,1,  "----x-------x---",SX); setLocation(spot);
        drumkitHHClosed (1,1,"----------------",SX); setLocation(spot);
        drumkitKick (1,1,    "--x---xx--x-x---",SX); setLocation(spot);
        drumkitSnare (1,1,   "--------x-------",SX); setLocation(spot);
        drumkitTomHi (1,1,   "----------------",SX); setLocation(spot);
        drumkitTom (1,1,     "----------------",SX); setLocation(spot);
        drumkitTomLo (1,1,   "----------------",SX);

        spot = getLocation();
        //                    1-&-2-&-3-&-4-&-
        drumkitCrash(1,1,    "----------------",SX); setLocation(spot);
        drumkitHHOpen (1,1,  "----x-------x---",SX); setLocation(spot);
        drumkitHHClosed (1,1,"----------------",SX); setLocation(spot);
        drumkitKick (1,1,    "x-----x---x-x---",SX); setLocation(spot);
        drumkitSnare (1,1,   "--------x-------",SX); setLocation(spot);
        drumkitTomHi (1,1,   "----------------",SX); setLocation(spot);
        drumkitTom (1,1,     "----------------",SX); setLocation(spot);
        drumkitTomLo (1,1,   "----------------",SX);

        if (i == 0) {

            spot = getLocation();
            //                    1-&-2-&-3-&-4-&-
            drumkitCrash(1,1,    "----------------",SX); setLocation(spot);
            drumkitHHOpen (1,1,  "----------------",SX); setLocation(spot);
            drumkitHHClosed (1,1,"----------------",SX); setLocation(spot);
            drumkitKick (1,1,    "--x-x-x---------",SX); setLocation(spot);
            drumkitSnare (1,1,   "x---------x-----",SX); setLocation(spot);
            drumkitTomHi (1,1,   "x-------x-------",SX); setLocation(spot);
            drumkitTom (1,1,     "--------x---x---",SX); setLocation(spot);
            drumkitTomLo (1,1,   "--------------x-",SX);

        }

        else {

            spot = getLocation();
            //                    1-&-2-&-3-&-4-&-
            drumkitCrash(1,1,    "----------------",SX); setLocation(spot);
            drumkitHHOpen (1,1,  "x---x-----------",SX); setLocation(spot);
            drumkitHHClosed (1,1,"--x---x---------",SX); setLocation(spot);
            drumkitKick (1,1,    "-x-x--x-x--x----",SX); setLocation(spot);
            drumkitSnare (1,1,   "x---x----xx-x---",SX); setLocation(spot);
            drumkitTomHi (1,1,   "-------------x--",SX); setLocation(spot);
            drumkitTom (1,1,     "--------------x-",SX); setLocation(spot);
            drumkitTomLo (1,1,   "---------------x",SX); 

        }
    }
}

