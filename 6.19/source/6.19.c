#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void)
{
	int num1, num2,sum,i;
	int count[13] = { 0 };
	srand(time(0));
	for (i = 1; i <= 36000; i++)
	{
		num1 = rand() % 6 + 1;
		num2 = rand() % 6 + 1;
		sum = num1 + num2;
		switch (sum)
		{
		case 2:
			count[2] += 1;
			break;
		case 3:
			count[3] += 1;
			break;
		case 4:
			count[4] += 1;
			break;
		case 5:
			count[5] += 1;
			break;
		case 6:
			count[6] += 1;
			break;
		case 7:
			count[7] += 1;
			break;
		case 8:
			count[8] += 1;
			break;
		case 9:
			count[9] += 1;
			break;
		case 10:
			count[10] += 1;
			break;
		case 11:
			count[11] += 1;
			break;
		case 12:
			count[12] += 1;
			break;
		}
	}
	printf("%-5d%-5d%-5d%-5d%-5d%-5d%-5d%-5d%-5d%-5d%-5d\n", 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12);
	for (i = 2; i <= 12; i++)
	{
		printf("%-5d",count[i]);
	}
	system("pause");
}