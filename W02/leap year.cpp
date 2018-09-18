
int main()
{#include<stdio.h>
  int  year;
  printf("Enter year: ");
  scanf("%d", &year);
  if((year%4==0&&year%100!=0)||(year%400==0))
   {
	printf("d is a leap year.",year);
   }
   else
   {
   printf("%d is not a leap year",year);	
   }
    }


/*Enter year: 2000
Year 2000 is a leap year.


Enter year: 2018
Year 2018 is not a leap year.


Enter year: 2020
Year 2020 is a leap year.


Enter year: 2100
Year 2100 is not a leap year.*/
