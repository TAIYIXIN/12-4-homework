#include<stdio.h>
#include<stdlib.h>
#define size 10
int recursiveMaximum(int a[],int x);

int main(void)
{
	int a[size] = { 7, 54, 13, 56, 48, 16, 17, 64, 98, 50 };
	int i;
	int b;
	printf("原始陣列為");
	for (i = 0; i <= size - 1; i++)
	{
		printf("%-3d",a[i]);
	}
	printf("\n");
	
	b = recursiveMaximum(a,size);
	printf("此陣列中最大值為%d",b);
	printf("\n");
	system("pause");
}


int recursiveMaximum(int a[],int x)
{
	if (x != 0)
	{
		if (a[x] > a[x - 1])
		{
			a[x - 1] = a[x];
		}
		x--;
		recursiveMaximum(a, x);
	}
	return a[0];		
}
