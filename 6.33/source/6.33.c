#include<stdio.h>
#include<stdlib.h>
#define size 15
size_t binarysearch(const int b[], int searchkey, size_t low, size_t high);
void printHeader(void);
void printrow(const int b[], size_t low, size_t mid, size_t high);
int x = 0;
int main(void)
{
	int a[size];
	int i;
	int key;
	int result;
	printf("請輸入要搜尋的數字0~28:");
	scanf_s("%d",&key);
	for (i = 0; i <= size - 1; i++)
	{
		a[i] = i * 2;
	}
	printHeader();
	result = binarysearch(a,key,0,size-1);
	if (result != -1)
	{
		printf("\n%d found in array element %d\n", key, result);
	}
	else
	{ 
		printf("\n%d not found\n", key); 
	}
	
	system("pause");
	return 0;
}

void printHeader(void)
{
	int i;
	printf("Subscripts:\n");
	for (i = 0; i <= size - 1; i++)
	{
		printf("%4d",i);
	}
	printf("\n");
	for (i = 0; i <=4*size; i++)
	{
		printf("%s","-");
	}
	printf("\n");
}
size_t binarysearch(const int b[], int searchkey, size_t low, size_t high)
{
	
	if (x == 4)
	{
		return -1;
	}
	x += 1;
	int middle;
	middle = (low + high) / 2;
	printrow(b, low, middle, high);
	if (searchkey == b[middle])
	{
		return middle;
	}
	else
	{
		if (searchkey > b[middle])
		{
			low = middle + 1;
		}
		if(searchkey < b[middle])
		{
			high = middle - 1;
		}
		binarysearch(b, searchkey, low, high);
	}
}


void printrow(const int b[], size_t low, size_t mid, size_t high)
{
	int i;
	for (i = 0; i <= size - 1; i++)
	{
		if (i<low || i>size - 1)
		{
			printf("    ");
		}
		else if (i == mid)
		{
			printf("%3d*",b[i]);
		}
		else
		{
			printf("%4d", b[i]);
		}
	}
	printf("\n");
}