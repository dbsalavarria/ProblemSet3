#include <stdio.h>

int main()
{
    char note = 0;
    int pitch = 0;

    printf("Enter your musical note: ");
    scanf("%c", note);

    switch(note)
    {
        case 'C':
        case 'c':
            pitch = 0;
            break;
        case 'D':
        case 'd':
            pitch = 2;
            break;
        case 'E':
        case 'e':
            pitch = 4;
            break;
        case 'F':
        case 'f':
            pitch = 5;
            break;
        case 'G':
        case 'g':
            pitch = 7;
            break;
        case 'A':
        case 'a':
            pitch = 9;
            break;
        case 'B':
        case 'b':
            pitch = 11;
            break;
        default:
            pitch = -1;
            break;
    }

    if(pitch >= 0)
    {
        printf("Note %c is pitch %d\n", note, pitch);
    }
    else
    {
        printf("The note %c does not exist", note);
    }
}