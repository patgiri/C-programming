#include<stdio.h>

void conIntoOcta(int a[], int n, char str[])
{
    int i=0,j=0,count=0,k=2;
    int m=0;
    char hex[]="01234567";
    for(i=0;i<=n;i++)
    {
        if(count==3)
        {
            str[j]=hex[m];
            m=0;
            count=0;
            k=2;
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
	int bin[]={1,0,0,0,1,1,0,1,0,1,0,0,1,0,1,1,0,1,1,1,0,1,0,1,1,1,0,1,1,1,0,0,1};
	char str[1024];
	int n=sizeof(bin)/sizeof(bin[0]);
	//printf("%d\n",n);
	conIntoOcta(bin,n,str);
	printf("Octal: %s\n",str);
	return 0;
}
	
	
