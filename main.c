#include <windef.h>
#include "Include_and_constants.h"


int Translation()
{
    int DecNumber = 0 ;
    system( "cls" ) ;
    printf( "Print number for translation_ " ) ;
    DecNumber = In() ; //читаем число для перевода
    printf( "Your Number in Binary form is\n" ) ;
    if( DecNumber < 0 ) printf( "1" ) ; //разруливаем знак числа для доп кода
    else printf( "0" ) ;
    BinaryNumbers( DecNumber , BinaryLength( DecNumber ) ); //выводим значение в двоичной форме
    printf( "\n" ) ;
    return 0 ;
}



int main()
{
    while(TRUE) //меню
    {
        system( "cls" ) ;
        printf( "1.Translate Dec to Bin number\n2.Exit\n" ) ;
        char Choose = getch() ;
        switch( Choose )
        {
            case '1' :
                Translation() ;
                printf( "Press any button to restart the programme_" ) ;
                getch() ;
                break ;
            case '2' :
                return 0 ;
            default:
                break ;
        }
    }


}