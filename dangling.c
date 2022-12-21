#include<stdio.h>

//Example of dangling pointer.
// foo1() will give error
//When function ended, all local memories are relased
//therefore, it become dangling.
int *foo1()
{
	int x=10; 
	return &x;  
}

//Solution of dangling pointer
int *foo2()
{
	static int x=20;
	return &x;  
}

int main()
{
	int *x=foo1();
	int *y=foo2();
 	printf("%d\t%d\n",*x,*y);
    	return 0;
}

