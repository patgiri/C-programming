#include<stdio.h>

void conIntoHex(int a[], int n, char str[])
{
    int i=0,j=0,count=0,k=3;
    int m=0;
    char hex[]="0123456789abcdef";
    for(i=0;i<=n;i++)
    {
        if(count==4)
        {
            str[j]=hex[m];
            m=0;
            count=0;
            k=3;
            j++;
        }
        m+=(1<<k)*a[i];    
        k--;
        count++;        
    }
    str[j]='\0';
}

int main()
{
	int bin[]={1,0,1,0,1,1,1,1,0,1,1,0,1,0,1,1,0,1,1,1,0,1,0,1,1,1,0,1,1,1,1,0};
	char str[1024];
	int n=sizeof(bin)/sizeof(bin[0]);
	printf("%d\n",n);
	conIntoHex(bin,n,str);
	printf("Hexadecimal: %s\n",str);
	return 0;
}
	
	
