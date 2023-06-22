#include <stdio.h>
#include <conio.h>
#define PA printf ("++++++++++++++++++++++++++++++++++++++++++\n") ;
void main()
{
   int number ;
   printf ("Enter Number : ") ;
   scanf ("%d" , &number) ;
   PA
   switch ( number ) {
    case 2 :    printf ("A...\n") ;
                printf ("B...\n") ;
                break;
    case 10 :   printf ("C...\n") ;
                break;
    case 99 :   printf ("D...\n") ;
                break;
    default :   printf ("WoW\n") ;
                printf ("Woo\n") ;
   }
    PA
    printf("IoT......");


}