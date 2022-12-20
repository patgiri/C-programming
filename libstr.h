/***********************************
Local string library
************************************/


//Implementation of library function strlen()
int length(char str[])
{
	int l;
	for(l=0;str[l]!='\0';l++);
	return l;
}

void reverse(char str[])
{
	int i,j;
	int l=length(str);
	for(i=0,j=l-1;i<j;i++,j--)
	{
		str[i]=str[i]+str[j];
		str[j]=str[i]-str[j];
		str[i]=str[i]-str[j];
	}
}

//Implementation of library function strcpy()
//String str[] will be copied to dest[].
void copy(char src[], char dest[])
{
	int l=length(src);
	int i;
	for(i=0;i<l;i++)
		dest[i]=src[i];
	dest[i]='\0';
}

//Implementation of library function strcat()
// String str1[] and str2[] will be concatenated and 
// result will be stored at dest[].
void concate(char str1[], char str2[], char dest[])
{
	int l1=length(str1);
	int l2=length(str2);
	int i,k;
	for(i=0,k=0;i<l1;i++,k++)
		dest[k]=str1[i];
	for(i=0;i<l2;i++,k++)
		dest[k]=str2[i];
	dest[k]='\0';
}

//Implementation of library function strcmp()
//Compare str1[] and str2[]
//Return 0 if str1[] and str2[] are equal
//Return 1 if str1[] is greater than str2[]
//Return -1 if str1[] is less than str2[].
int compare(char str1[], char str2[])
{
	int i,j,k;
	for(i=0;str1[i]!='\0'&&str2[i]!='\0';i++)
	{
		if(str1[i]>str2[i])
			return 1;
		if(str1[i]<str2[i])
			return -1;
	}
	if(str1[i]!='\0'&&str2[i]=='\0')
		return 1;
	if(str1[i]=='\0'&&str2[i]!='\0')
		return -1;
	return 0;
}


//finding substring substr[] in str[]
// it returns 1 if substr[] is a substring of str[]
// return -1, otherwise

int substring(char str[], char substr[])
{
    int i = 0, j = 0;
    while ((str[j] != '\0')&&(substr[i] != '\0')) {
        if (str[j] != substr[i]) {
            j++;
            i = 0;
        }
        else {
            i++;
            j++;
        }
    }
    if (substr[i] == '\0')
        return 1;
    return -1;
}
