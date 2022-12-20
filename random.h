#include <time.h>
unsigned int random32()
{
    int i,n,d;
    unsigned int r=0;
    for(i=0;i<32;i++)
    {
        n=clock();
        d=n&1;
        r=r+d*(1<<i);
    }
    return r;
}

unsigned long int random64()
{
    long int i,n,d;
    unsigned long int r=0;
    for(i=0;i<64;i++)
    {
        n=clock();
        d=n&1;
        r=r+d*(1L<<i);
    }
    return r;
}
