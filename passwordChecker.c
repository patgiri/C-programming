#include<stdio.h>

int minimum(int sc, int uc, int lc, int dc)
{
	if(sc<uc && sc<lc && sc<dc)
		return sc;
	else
	if(uc<lc && uc<dc)
		return uc;
	else
	if(lc<dc)
		return lc;
	else
		return dc;

}

void strength(char str[])
{
	int sc=0,uc=0,lc=0,dc=0;
	int i,l;
	int flag=0;
	for(l=0;str[l]!='\0';l++);
	if(l<8)
	{
		printf("Invalid length of %s!\n",str);
		return;
	}

	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>=65&&str[i]<=90)
			uc++;
		else
		if(str[i]>=97&&str[i]<=122)
			lc++;
		else
		if(str[i]>=48&&str[i]<=57)
			dc++;
		else
			sc++;
	}
	flag=minimum(sc,uc,lc,dc);
	if(flag==0)
		printf("The password \"%s\" is invalid\n",str);
	else
	if(flag==1)
		printf("The password \"%s\" is the weakest\n",str);
	else
	if(flag==2)
		printf("The password \"%s\" is weak\n",str);
	else
	if(flag==3)
		printf("The password \"%s\" is good\n",str);
	else
	if(flag==4)
		printf("The password \"%s\" is strong\n",str);
	else
		printf("The password \"%s\" is very strong\n",str);
}
int main()
{
	char pass[100]="Arunov@CSE_2022_J:Section";
	char pass1[100]="FunnWithDataStructures";
	char pass2[100]="Umesh";
	char pass3[100]="Nawadeep@2022";
	char pass4[100]="ManiKiran@CSE_Data_Structures:2022_788010";
	char pass5[100]="BhargavB@2022_";
	char pass6[100]="Raunak@BhuyanAssam:2022:1995";
	strength(pass);
	strength(pass1);
	strength(pass2);
	strength(pass3);
	strength(pass4);
	strength(pass5);
	strength(pass6);

	return 0;
}

