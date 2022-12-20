#include<stdio.h>
#include"random.h"

int main()
{
	int i=0;
	printf("32-bit random numbers\n");
	for(i=0;i<10;i++)
		printf("%u\t",random32());
	printf("64-bit random numbers\n");
	for(i=0;i<10;i++)
		printf("%lu\t",random64());
	return 0;
}

