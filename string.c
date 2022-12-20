#include <stdio.h>
#include "libstr.h"

int main()
{
	
	int i;
	char str[100]="Abhinav Abhinash Abhishek Anil Anand Ankit Anshuman Arindom Arunav";
	char sub[100]="Anil Anand";
	char subs[20]="Lokesh Mohith";
	char str1[20]="sumit";
    	char str2[20]="suman";
	char str3[20]="suraj";
	char str4[20]="saptarshi";
	char str5[20], str6[20];
	reverse(str4);
	printf("The reversal string : %s\n",str4);
	copy(str3,str5);
	printf("Copied string: %s\n",str5);
	concate(str2, str3, str6);
	printf("Concatenated string: %s\n",str6);
	if(compare(str1,str2)==0)
		printf("%s and %s are equal\n",str1,str2);
	if(compare(str1,str2)==1)
		printf("%s is greater than %s\n",str1,str2);
	if(compare(str1,str2)==-1)
		printf("%s is less than %s\n",str1,str2);

	if(substring(str,sub)==1)
		printf("\"%s\" is a substring of \"%s\"\n",sub,str);
	else
		printf("\"%s\" is not a substring of \"%s\"\n",sub,str);

	if(substring(str,subs)==1)
		printf("\"%s\" is a substring of \"%s\"\n",subs,str);
	else
		printf("\"%s\" is not a substring of \"%s\"\n",subs,str);

	return 0;
}


