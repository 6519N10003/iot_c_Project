#include <stdio.h>
#include <conio.h>
#define PA printf ("++++++++++++++++++++++++++++++++++++++++++\n") ;
void main()
{
    double car_weight ;
    char car_number[20];
PA
    printf ("\t\tProgram Truck\n") ;
PA
    printf ("Input Car Number : ") ;
    scanf("%s",&car_number);
    printf ("Input Weight : ") ;
    scanf("%lf",&car_weight);
PA
   if (car_weight >= 2500) {
       printf("Not Pass...... T_T\n");
       PA
    }else {
       printf("Pass...... ^-^\n");
       PA
    }
   
}