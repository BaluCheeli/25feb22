#include<stdio.h>

int main()
{
int a,b;
printf("enter the a and b values\n");
scanf("%d %d",&a,&b);
printf("before swap: %d %d\n",a,b);
a^=b;
b^=a;
a^=b;
printf("after swap: %d %d\n",a,b);
return 0;
}
