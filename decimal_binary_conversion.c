#include<stdio.h>
#include"dec_bin.h"
#include"random.h"
int main()
{
    int bin[32],d=0,i,j;
    unsigned int n=random32();
    for(i=0;i<32;i++)
	bin[i]=0;
    printf("The number:%u\n",n);
    decimalToBinary(n,bin);
    printf("The binary number of %d is:\n",n);
    for(i=0;i<32;i++)
        printf("%d",bin[i]);
    printf("\nConvert back to decimal: %u\n",binaryToDecimal(bin));
    return 0;
}

