#include <stdio.h>
#define SET(x) x|(0x1<<p)
#define MY_SIZEOF(type) ((char)(&type+1)-(char)(&type))*8


int main()
{
int x,p,n,a,i;
printf("enter the bit no\n");
scanf("%d",&x);
printf("enter the position \n");
scanf("%d",&p);

n=MY_SIZEOF(x);
printf("Before set the %d position ",p);
for(i=n-1;i>=0;i--)
{
if(x&(1<<i))
        printf("1");
else
        printf("0");
}
printf("\n");
a=SET(x);

printf("after set the  \t %d bit ",p);
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

