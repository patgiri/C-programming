#include<stdio.h>
void encrypt(char text[], int key, char cipher[])
{
	int i;
	for(i=0;text[i]!='\0';i++)
	{
		if(text[i]>=65&&text[i]<=90)
			cipher[i]=((text[i] - 65 + key) % 26 + 'A');
		else
			cipher[i]=((text[i] - 97 + key) % 26 + 'a');
	}
	cipher[i]='\0';
}

void decrypt(char cipher[], int key, char text[])
{
	int i;
	for(i=0;cipher[i]!='\0';i++)
	{
		if(cipher[i]>=65&&cipher[i]<=90)
			text[i]=((cipher[i] - 65 - key + 26) % 26 + 65);
		else
			text[i]=((cipher[i] - 97 - key + 26) % 26 + 97);

	}
	text[i]='\0';
}

int main()
{
	char input[1024]="ILoveYouLetUsMeetAtNightSweetHeart";
	int key=23;
	char cipher[1024];
	char text[1024];
	encrypt(input, key, cipher);	
	printf("The ciphertext is: %s\n",cipher);
	decrypt(cipher, key, text);
	printf("The decrypted text is: %s\n",text);
	return 0;
}
