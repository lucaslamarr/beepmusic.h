#ifndef BEEPMUSIC_H
#define BEEPMUSIC_H

#ifdef _WIN32
    #define WIN32_LEAN_AND_MEAN
    #include <windows.h>
#endif
#include <stdio.h>
#include <stdint.h>
#include <time.h>

// ---------- KEYS ----------

#define C0          16.35
#define CSHARP0     17.32
#define D0          18.35
#define DSHARP0     19.45
#define E0          20.60
#define F0          21.83
#define FSHARP0     23.12
#define G0          24.50
#define GSHARP0     25.96
#define A0          27.50
#define ASHARP0     29.14
#define B0          30.87

#define C1          32.70
#define CSHARP1     34.65
#define D1          36.71
#define DSHARP1     38.89
#define E1          41.20
#define F1          43.65
#define FSHARP1     46.25
#define G1          49.00
#define GSHARP1     51.91
#define A1          55.00
#define ASHARP1     58.27
#define B1          61.74

#define C2          65.41
#define CSHARP2     69.30
#define D2          73.42
#define DSHARP2     77.78
#define E2          82.41
#define F2          87.31
#define FSHARP2     92.50
#define G2          98.00
#define GSHARP2     103.83
#define A2          110.00
#define ASHARP2     116.54
#define B2          123.47

#define C3          130.81
#define CSHARP3     138.59
#define D3          146.83
#define DSHARP3     155.56
#define E3          164.81
#define F3          174.61
#define FSHARP3     185.00
#define G3          196.00
#define GSHARP3     207.65
#define A3          220.00
#define ASHARP3     233.08
#define B3          246.94

#define C4          261.63
#define CSHARP4     277.18
#define D4          293.66
#define DSHARP4     311.13
#define E4          329.63
#define F4          349.23
#define FSHARP4     369.99
#define G4          392.00
#define GSHARP4     415.30
#define A4          440.00
#define ASHARP4     466.16
#define B4          493.88

#define C5          523.25
#define CSHARP5     554.37
#define D5          587.33
#define DSHARP5     622.25
#define E5          659.25
#define F5          698.46
#define FSHARP5     739.99
#define G5          783.99
#define GSHARP5     830.61
#define A5          880.00
#define ASHARP5     932.33
#define B5          987.77

#define C6          1046.50
#define CSHARP6     1108.73
#define D6          1174.66
#define DSHARP6     1244.51
#define E6          1318.51
#define F6          1396.91
#define FSHARP6     1479.98
#define G6          1567.98
#define GSHARP6     1661.22
#define A6          1760.00
#define ASHARP6     1864.66
#define B6          1975.53

#define C7          2093.00
#define CSHARP7     2217.46
#define D7          2349.32
#define DSHARP7     2489.02
#define E7          2637.02
#define F7          2793.83
#define FSHARP7     2959.96
#define G7          3135.96
#define GSHARP7     3322.44
#define A7          3520.00
#define ASHARP7     3729.31
#define B7          3951.07

const uint8_t ALL_KEYS[96] =
{
    C0, CSHARP0, D0, DSHARP0, E0, F0, FSHARP0, G0, GSHARP0, A0, ASHARP0, B0,
    C1, CSHARP1, D1, DSHARP1, E1, F1, FSHARP1, G1, GSHARP1, A1, ASHARP1, B1,
    C2, CSHARP2, D2, DSHARP2, E2, F2, FSHARP2, G2, GSHARP2, A2, ASHARP2, B2,
    C3, CSHARP3, D3, DSHARP3, E3, F3, FSHARP3, G3, GSHARP3, A3, ASHARP3, B3,
    C4, CSHARP4, D4, DSHARP4, E4, F4, FSHARP4, G4, GSHARP4, A4, ASHARP4, B4,
    C5, CSHARP5, D5, DSHARP5, E5, F5, FSHARP5, G5, GSHARP5, A5, ASHARP5, B5,
    C6, CSHARP6, D6, DSHARP6, E6, F6, FSHARP6, G6, GSHARP6, A6, ASHARP6, B6,
    C7, CSHARP7, D7, DSHARP7, E7, F7, FSHARP7, G7, GSHARP7, A7, ASHARP7, B7,
};

void play_note(float key, uint32_t noteDurationMs)
{
    printf("Hz - %f\n", key);
    Beep(key, noteDurationMs);
}

void play_random_sequence(uint32_t numberOfNotes, uint32_t minNoteDurationMs, uint32_t maxNoteDurationMs)
{
    printf("Rate: %d-%d Milliseconds\n\n", minNoteDurationMs, maxNoteDurationMs);

    srand(time(NULL));

    for (uint32_t counter = 0; counter < numberOfNotes; counter++)
    {
        uint8_t randomKey     = (rand() % (((sizeof(ALL_KEYS) / sizeof(ALL_KEYS[0])) - 1))) + 0;
        uint32_t randomLength = (rand() % maxNoteDurationMs) + minNoteDurationMs;

        play_note(ALL_KEYS[randomKey], randomLength);
    }

    printf("\n");
}


#endif