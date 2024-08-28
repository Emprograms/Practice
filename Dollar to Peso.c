#include<stdio.h>

#define PHIL_PESO 50.6

int main()
{
   float convert = 0.00, us_dollar = 0.00;
   
   printf("\n\n");
   printf("\tUS Dollar to Philippine Peso Converter");
   printf("\n\n");
   printf("\tEnter US Dollar Value : ");
   scanf("%f",&us_dollar);
   
   convert = (us_dollar * PHIL_PESO);
   
   printf("\n\n");
   printf("\tThe Value of $%2.2f US Dollar in ", us_dollar);
   printf("Philippine Peso is PHP %2.2f.", convert);
   printf("\n\n");
   printf("\tEnd of Program");
   printf("\n");
 
   }
   
   
     
