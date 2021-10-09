/* no is divisible by 7 */
/*preprocessor directive */ 
#include<stdio.h>
/* global variable declaration */
int main()
{
int i,sum=0;
printf("the number is divisible by 7 are");
  for(i=1;i<=100;i++)
  {
  if(i%7==0)
  printf("%d\n",i);
  sum+=i;
 }
 printf("sum=%d",sum);

return 0;

}

