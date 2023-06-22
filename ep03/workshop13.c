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
    if (level == 1) {
       printf ("Welcome..........Freshy\n") ;
       PA
    }else if(level == 2) {
       printf("Welcome..........Sophomore\n");
       PA
    }else if(level == 3) {
       printf("Welcome..........Junior\n");
       PA
    }else if(level == 4) {
       printf("Welcome..........Senior\n");
       PA
    }else {
       printf("Ho, no.......\n");
       PA
    }

}