#include<stdio.h>

int gcd_(int a, int b)
{
	if (b == 0)
		return a;
	return gcd_(b, a % b);
}

int _gcd_(int m, int n)
{
	int i,gcd;
	for(i = 1; i <= m && i <= n; i++)
    	{
        	if(m % i == 0 && n % i == 0)
            		gcd = i;
    	}
	return gcd;
}

int _gcd(int x, int y) 
{
	if (x == 0) {
  		return y;
  	}
 	while (y != 0) 
	{
    		if (x > y) 
			x = x - y;
    		else 
	      		y = y - x;
  	}
  	return x;
}
int main()
{
	printf("GCD function 1 : %d\n",gcd_(81,153));
	printf("GCD function 2 : %d\n",gcd_(81,153));
	printf("GCD function 3 : %d\n",gcd_(81,153));
	return 0;
}
