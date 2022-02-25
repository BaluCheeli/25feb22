#include<stdio.h>
long int fact(int n);

int main()
{
int n;
printf("enter the num\n");
scanf("%d",&n);
printf("fact of %d is %ld \n",n,fact(n));
return 0;
}

long int fact(int n)
{
if(n==0)
	return 1;
return (n*fact(n-1));
}
