/*write a program to display bill */
#include <stdio.h>
int main()
{
   float price[25],amount[25],bill=0.0;
   int i,n,j,qty[25];
   printf("\n how many item you want to purchased?");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
  printf("\n Enter price \n");
  scanf("%f",&price[i]);
  printf("\n how much purchased?\n");
  scanf("%d",&qty[i]);
  amount[i]=price[i]*qty[i];
  }
   printf("\n Item no.\nPrice\nQuantity\nAmount\n");
   for(i=0;i<n;i++)
   {
    j=i+1;
    printf("\n%4d %.3f %5d %.2f\n",j,price[i],qty[i],amount[i]);
	bill+=amount[i];
	}
	printf("\n  Total bill Rs../%4.2f\n",bill);
	
       return 0;
  }

