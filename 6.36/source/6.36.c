#include<stdio.h>
#include<stdlib.h>
#define size 10
char rev[size];
char stringReverse(char str[], int x);
int main(void)
{
	int i;
	char a[size] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' };
	for (i = 0; i <= size - 1; i++)
	{
		printf("%-5c", a[i]);
	}
	printf("\n");
	stringReverse(a, 0);
	for (i = 0; i <= size - 1; i++)
	{
		printf("%-5c", a[i]);
	}
	printf("\n");
	system("pause");
	return 0;

 }

char stringReverse(char str[], int x)
{
	int i;
	if (x == 0)
	{
		for (i = 0; i <= size - 1; i++)
		{
			rev[i] = str[i];
		}
	}
	str[size - x - 1] = rev[x];
	if (str[x] != '\0')
	{
		stringReverse(str, x + 1);
	}
}