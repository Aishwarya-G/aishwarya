#include <stdio.h>

int main(void) 
{
int a,n,seed,b=1,t,tot;

scanf("%d %d",&a,&seed);
n=a;
	
while(n!= 0 )
{
	b= b*(n%10);

	n=n/10;
}
tot= a*b;
if(tot == seed)
printf("It is a seed");
else 
printf("It is not a seed");
	return 0;
}
