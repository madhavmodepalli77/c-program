#include<stdio.h>
#include<stdlib.h>
void main()
{
  float g;
  printf("enter student's marks : ");
  scanf("%f",&g);
  if((g>=85)&&(g<=100))
  printf("grade A");
   else if((g>=70)&&(g<=84))
    printf("grade B");
    else if((g>=55)&&(g<=69)) 
     printf("grade C");
     else if((g>=40)&&(g<=54))
   printf("grade D");
   else
   printf("grade F");
}
