#include<stdio.h>

int foo1(int n)
{
    int sum=0;
    if(n>=0)
    {
        sum+=n;
        foo1(n-1);
    }
    return sum;
}

int foo2(int n)
{
    static int sum=0;
    if(n>=0)
    {
        sum+=n;
        foo2(n-1);
    }
    return sum;
}
int main()
{
    printf("First recusrion: %d\n",foo1(4));
    printf("Second recusrion: %d\n",foo2(4));
    return 0;
}
