#include <stdio.h>
#include <conio.h>
#define PA printf ("++++++++++++++++++++++++++++++++++++++++++\n") ;
void main()
{
   int level ;
   PA
   printf ("Program Welcome SAU\n") ;
   PA
   printf ("Enter Level : ") ;
   scanf ("%d" , &level) ;
   PA
   switch ( level ) {
    case 1 :    printf ("Welcome..........Freshy\n") ;
                break;
    case 2 :   printf ("Welcome..........Sophomore\n") ;
                break;
    case 3 :   printf ("Welcome..........Junior\n") ;
                break;
    case 4 :   printf ("Welcome..........Senior\n") ;
                break;
    default :   printf ("Ho, no.......\n") ;
    
   }
    PA
    


}