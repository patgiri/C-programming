void decimalToBinary(unsigned int n,int bin[])
{
    int i;
    for(i=31;n>0;i--)
    {
        bin[i]=n&1;
        n=n>>1;
    }
}
unsigned int binaryToDecimal(int bin[])
{
    int i,j;
    unsigned int d=0;
    for(i=31,j=0;i>=0;i--,j++)
	d=d+bin[i]*(1<<j);
    return d;
}

