#include <windef.h>
#include "Include_and_constants.h"

int Length(int Number)
{
    int Length = 0;
    while(Number > 0)
    {
        Length++;
        Number = Number / 2;
    }
    return Length;
}

int Translation()
{
    int DecNumber = 0;
    system("cls");
    printf("Print number for translation_ ");
    DecNumber = In();
    printf("Your Number in Binary form is\n");
    if( DecNumber < 0 )printf("1");
    else printf("0");
    BinaryNumbers( DecNumber , BinaryLength(DecNumber) );
    printf("\n");
    return 0;
}



int main()
{
    while(TRUE)
    {
        system("cls");
        printf("1.Translate Dec to Bin number\n2.Exit\n");
        char Choose = getch();
        switch(Choose)
        {
            case '1' :
                Translation();
                printf("Press any button to restart the programme_");
                getch();
                break;
            case '2' :
                return 0;
            default:
                break;
        }
    }


}