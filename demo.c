#include "beepmusic.h"

/*--------------------------
  ------DEMO SEQUENCES------
  --------------------------*/

void Sequence1()
{
    printf("-- Sequence 1--\n");
    printf("Rate: Varied\n\n");

    for (int i = 0; i < 2; i++)
    {
        for (int i = 0; i < 4; i++)
        {
            PlayNote(A3, 200);
            PlayNote(B3, 200);
            PlayNote(C4, 200);
            PlayNote(E3, 200);
        }

        for (int i = 0; i < 2; i++)
        {
            PlayNote(A3, 200);
            PlayNote(B3, 200);
            PlayNote(C4, 200);
            PlayNote(E4, 200);
                         
            PlayNote(A3, 200);
            PlayNote(B3, 200);
            PlayNote(C4, 200);
            PlayNote(F4, 200);
        }
    }

    printf("\n");
}
void Sequence2()
{
    printf("-- Sequence 2--\n");
    printf("Rate: Varied\n\n");

    for (int i = 0; i < 2; i++)
    {
        PlayNote(G3, 200);
        PlayNote(G3, 200);
        PlayNote(G3, 200);
        PlayNote(G3, 200);
                     
        PlayNote(D4, 200);
        PlayNote(D4, 200);
        PlayNote(D4, 200);
        PlayNote(D4, 200);
                     
        PlayNote(E4, 200);
        PlayNote(E4, 200);
        PlayNote(E4, 200);
                     
        PlayNote(C4, 200);
        PlayNote(C4, 200);
        PlayNote(C4, 200);
        PlayNote(C4, 200);
        PlayNote(C4, 200); 
    }

    printf("\n");
}

void RunDemo()
{
    Sequence1();
    Sequence2();

    PlayRandomSequence(15);
    PlayRandomSequenceAtFixedRate(50, 150);
}

int main() 
{ 
    RunDemo();
    return 0;
}

