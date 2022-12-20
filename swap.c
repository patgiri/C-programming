/******************************************************
Problem statement:
To demonstrate diverse swapping method
*******************************************************/


#include<stdio.h>

int main()
{
	int a=4,b=5,temp;
	//Swapping using temporary variable.
	printf("Before Swapping: A=%d   B=%d\n",a,b);
	temp=a;
	a=b;
	b=temp;
	
	//Displaying the swapped values.
	printf("The swapped values: A=%d   B=%d\n",a,b);	

	/**********************************************
	Swapping using *, / operators.
	* and / operator is costly.
	But it does not use temporary variable.
	***********************************************/
	a=a*b;
	b=a/b;
	a=a/b;
	//Displaying the swapped values.
	printf("The swapped values: A=%d   B=%d\n",a,b);

	/**********************************************	
	Swap using + and - operator.
	The + and - are faster than *, and / operators.
	***********************************************/

	a=a+b;
	b=a-b;
	a=a-b;

	//Displaying the swapped values.
	printf("The swapped values: A=%d   B=%d\n",a,b);

	/**********************************************
	Swapping using XOR (^) operator.
	In C programming, ^ is used for XOR operation
	***********************************************/
	
	a=a^b;
	b=a^b;
	a=a^b;
	//Displaying the swapped values.
	printf("The swapped values: A=%d   B=%d\n",a,b);
	
	return 0;
}
