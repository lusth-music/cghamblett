#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <songlib/util.h>
#include <songlib/songlib.h>

#define dir "/usr/local/share/samples/guitar-electric/"
#define base "gibson_"

/* change PROGRAM_NAME and PROGRAM_VERSION appropriately */



char *PROGRAM_NAME = "chord";
char *PROGRAM_VERSION = "1.0";


int main ()
{
    int instrument;
    int octave = 3;
    int i;
    songInit();
    
    instrument = readScale(dir,base);

    setTempo(250);
    setTime(4,4);
    setStride(0.05);
    setSustain(0.99995);
    setAmplitude(0.3);

    openOutput("chord.rra",0,0);
    
    for (i = 0; i < 2; i++)
    {
        ci1(1, Q, instrument, octave);
        ci2(6, Q, instrument, octave-1);
        c(4, W, instrument, octave);
        c(5, W, instrument, octave);
        b(1, W, instrument, octave + 1, "x-x", "-x-", "x-x", "-x-", SX);
        b(6, W, instrument, octave + 1, "-xx", "-x-", "-xx", "-x-", SX);
        b(4, W, instrument, octave + 1, "x-x", "-x-", "x-x", "xx-", SX);
        b(5, W, instrument, octave + 1, "x-x", "-x-", "x-x", "-x-", SX);
    }

    c(5, Q, instrument, octave);
    c(4, Q, instrument, octave);
    c(6, Q, instrument, octave);
    c(1, Q, instrument, octave);


    b(1, W, instrument, octave, "-x-", "x-x", "-x-", "x-x", SX);
    b(6, W, instrument, octave, "x--", "x-x", "xx-", "x-x", SX);
    b(4, W, instrument, octave, "-xx", "x-x", "xxx", "-x-", SX);
    b(5, W, instrument, octave, "---", "x--", "-x-", "xx-", SX);
    b(1, W, instrument, octave, "-x-", "x-x", "-x-", "x-x", SX);
    b(6, W, instrument, octave, "x--", "x-x", "xx-", "x-x", SX);
    b(4, W, instrument, octave, "-xx", "x-x", "xxx", "-x-", SX);
    b(5, W, instrument, octave, "---", "x--", "-x-", "xx-", SX);



    closeOutput();
    return 0;

}
