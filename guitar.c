#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "/usr/local/include/songlib/util.h"
#include "/usr/local/include/songlib/songlib.h"

#define dir "/usr/local/share/samples/guitar-electric/"
#define base "gibson_"

/* change PROGRAM_NAME and PROGRAM_VERSION appropriately */



char *PROGRAM_NAME = "guitar";
char *PROGRAM_VERSION = "2.0";
void intro(int,int);
void verse(int,int);
void chorus(int,int);
void chords(int,int);
void bridge(int,int);

int main ()
{
    int instrument;
    int octave = 3;
    songInit();
    
    instrument = readScale(dir,base);

    setTempo(250);
    setTime(4,4);
    setStride(0.05);
    setSustain(0.99995);
    setAmplitude(0.25);

    openOutput("guitar.rra",0,0);
    
    intro (octave,instrument);
    verse (octave,instrument);
    chorus(octave,instrument);
    verse (octave,instrument);
    chorus(octave,instrument);
    bridge(octave,instrument);
    verse (octave,instrument);
    chorus(octave,instrument);
    verse (octave,instrument);
    chorus(octave,instrument);

    closeOutput();
    return 0;

}


void intro(int octave,int instrument)
{
    int i;
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
}

void verse(int octave,int instrument)
{
    

    int i;
    for (i = 0; i < 2; i++)
    {
        b(1, W, instrument, octave, "-x-", "x-x", "-x-", "x-x", SX);
        b(6, W, instrument, octave, "x--", "x-x", "xx-", "x-x", SX);
        b(4, W, instrument, octave, "-xx", "x-x", "xxx", "-x-", SX);
        b(5, W, instrument, octave, "---", "x--", "-x-", "xx-", SX);
        b(1, W, instrument, octave, "-x-", "x-x", "-x-", "x-x", SX);
        b(6, W, instrument, octave, "x--", "x-x", "xx-", "x-x", SX);
        b(4, W, instrument, octave, "-xx", "x-x", "xxx", "-x-", SX);
        b(5, W, instrument, octave, "---", "x--", "-x-", "xx-", SX);
    }
}

void chorus(int octave, int instrument)
{
    octave++;
    int i;
    for (i = 0; i < 2; i++)
    {
        b(1, W, instrument, octave, "x-x", "x-x", "x-x", "x-x", SX);
        c(6, H, instrument, octave)/*, "-xx", "x-x", "-x-", "x-x", SX)*/;
        c(6,H,instrument,octave);
        b(4, W, instrument, octave, "-xx", "x-x", "x--", "-x-", SX);
        b(5, W, instrument, octave, "x-x", "x-x", "x-x", "x-x", SX);
        c(1,H,instrument,octave);
        c(1,H,instrument,octave);
        b(4, W, instrument, octave, "-xx", "x-x", "x--", "-x-", SX);
        b(5, W, instrument, octave, "x-x", "x-x", "x-x", "x-x", SX);
        if(i == 0)
        {
            c(2,W,instrument,octave);
        }
        else
        {
            c(4,W,instrument,octave);
        }
    }
}

void bridge(int octave, int instrument) 
{
    octave++;
    int i;
    for (i = 0; i < 2; i++) {
        c(8,W,instrument,octave);
        c(8,Q,instrument,octave);
        c(7,Q,instrument,octave);
        c(6,Q,instrument,octave);
        c(5,Q,instrument,octave);
        c(4,W,instrument,octave);
        c(4,H,instrument,octave);
        c(6,Q,instrument,octave);
        c(4,Q,instrument,octave);
        c(5,Hd,instrument,octave);
        c(3,Q,instrument,octave);
        c(3,Q,instrument,octave);
        c(4,Q,instrument,octave);
        c(5,Q,instrument,octave);
        c(3,Q,instrument,octave);
        c(4,W,instrument,octave);

        if (i == 0) {
            c(4,Q,instrument,octave);
            c(5,Q,instrument,octave);
            c(6,Q,instrument,octave);
            c(7,Q,instrument,octave);
        }
        else {
            c(2,W,instrument,octave);
        }
    }
}

void chords(int octave, int instrument) {

    c(1,H,instrument,octave);
    c(2,H,instrument,octave);
    c(3,H,instrument,octave);
    c(4,H,instrument,octave);
    c(5,H,instrument,octave);
    c(6,H,instrument,octave);
    c(7,H,instrument,octave);
    c(8,H,instrument,octave);
    c(9,H,instrument,octave);

}