#include <stdio.h>
void pf(int );

int main()
{
    int n=10;
    pf(n);
}

void pf(int n)
{
    if(n==0)
    return;
    
    printf("%d\n",n);
    pf (n-1);
}
