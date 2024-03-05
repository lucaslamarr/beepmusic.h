# A small Windows tone generator written in C. Play individual notes or sequences in keys A0-B7.

All you need to do is ```#include "beepmusic.h"``` after placing it within your project source directory. After you have included the header file, you will now have access to 96 #define constant floating point values which contain the frequencies for keys A0-B7, as well as functions for easily playing individual notes or random sequences.

This library is an abstraction of the following Windows function...

```
BOOL Beep(
  [in] DWORD dwFreq,
  [in] DWORD dwDuration
);
```

By including ```beepmusic.h``` you can call these functions.

```void PlayNote(float key, int length)```

```void PlayRandomSequence(int numberOfNotes)```

```void PlayRandomSequenceAtFixedRate(int numberOfNotes, int rateInMilliseconds)```

Each of these functions will call ```Beep(DWORD dwFreq, DWORD dwDuration)``` under the hood and allow you to precisely set the desired key and length of every note that is played.
By using one of the random sequences, you can specify the number of notes and a fixed length that will be used when playing random notes between A0-B7. It should be noted that the original Windows
function is synchronous when sending instructions to the computer speaker, which means that you cannot stack these sounds across different threads to play multiple notes on top of each other.

A demo program is also included that demonstrates two custom sequences, as well as two random sequences.

# Future Plans

- Major and Minor scales for playing back random sequences.
- Importing and Exporting MIDI.
