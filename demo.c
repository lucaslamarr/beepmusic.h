#include "beepmusic.h"

#include <stdbool.h>

static void run_demo_01()
{
    printf("-- Demo 1 (Manual Note Placement) --\n\n");

    for (int i = 0; i < 2; i++)
    {
        for (int i = 0; i < 2; i++)
        {
            play_note(A3, 200);
            play_note(B3, 200);
            play_note(C4, 200);
            play_note(E3, 200);
        }

        for (int i = 0; i < 1; i++)
        {
            play_note(A3, 200);
            play_note(B3, 200);
            play_note(C4, 200);
            play_note(E4, 200);
                         
            play_note(A3, 200);
            play_note(B3, 200);
            play_note(C4, 200);
            play_note(F4, 200);
        }
    }

    printf("\n");
}

static void run_demo_02()
{
    printf("-- Demo 2 (Random Sequence Fixed Rate) --\n\n");

    play_random_sequence(24, 200, 200);

    printf("\n");
}

static void run_demo_03()
{
    printf("-- Demo 3 (Random Sequence Varied Rate) --\n\n");

    play_random_sequence(24, 200, 800);

    printf("\n");
}

int main() 
{ 
    bool show_menu = true;

    while (show_menu)
    {
        printf("Select Demo\n\n");
        printf("1: Manual Note Placement\n");
        printf("2: Random Sequence Fixed Rate\n");
        printf("3: Random Sequence Varied Rate\n\n");
        printf("Choice: ");

        char choice = _getch();

        printf("\n\n");

        switch (choice)
        {
            case '1':
                run_demo_01();
                break;
            case '2':
                run_demo_02();
                break;
            case '3':
                run_demo_03();
                break;
            case 'q':
            case 'Q':
                show_menu = false;
                break;
            default:
                break;
        }
    }

    return 0;
}

