#include <stdio.h>
int main(void)
{
    char ch='*';
	char value[100];
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<=i;j++)
		{
			value[j]=ch;
		}
	}
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<=i;j++)
		{
			printf("%c",value[j]);
		}
		printf("\n");
	}

}
