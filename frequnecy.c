#include <stdio.h>
#include <time.h>
#include "random.h"
void frequency()
{
    int max=5,i,n=100000;
    int a[n],b[max];
    for(i=0;i<n;i++)
        a[i]=random32()%max; 
    for(i=0;i<max;i++)
        b[i]=0;
    for(i=0;i<n;i++)
        b[a[i]]++;
    printf("i = b[i]\n");
    for(i=0;i<max;i++)
        printf("%d = %d\n",i,b[i]);
}

int main()
{
    frequency();
    return 0;
}
