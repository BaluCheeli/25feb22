#include <stdio.h>
#define CLEAR(x) x&(~(0x1<<p))
#define MY_SIZEOF(type) ((char)(&type+1)-(char)(&type))*8


int main()
{
int x,p,n,a,i;
printf("enter the bit no\n");
scanf("%d",&x);
printf("enter the position \n");
scanf("%d",&p);

n=MY_SIZEOF(x);
printf("Before clear the %d position ",p);
for(i=n-1;i>=0;i--)
{
if(x&(1<<i))
        printf("1");
else
        printf("0");
}
printf("\n");
a=CLEAR(x);

printf("after clear the  \t %d bit ",p);
for(i=n-1;i>=0;i--)
{
if(a&(1<<i))
	printf("1");
else
	printf("0");
}
printf("\n");
printf("%d\n",a);
return 0;
}
