/***********************************
Anagram: 
1. arm is anagram of gram but gram is not an anagram of arm
2. anil is anagram of lina and vice versa
3. allain is anagram of anil or vice versa
4. jan is anagram of janisa but janisa is not an anagram of jan
5. Emon is not anagram of emon

************************************/
#include <stdio.h>
int anagram(char str1[], char str2[])
{
    int hash[256]={0};
    int i;
    for(i=0;str1[i]!='\0';i++)
        hash[str1[i]]=1;
    for(i=0;str2[i]!='\0';i++)
        if(hash[str2[i]]!=1)
            return 0;
    return 1;
}

int main()
{
    char str1[64]="listen";
    char str2[64]="silent";
    if(anagram(str1,str2))
        printf("%s is an anagram of %s\n",str1,str2);
    else
        printf("%s is not an anagram of %s\n",str1,str2);
    return 0;
}



