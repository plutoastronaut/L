#include<stdio.h>
#include<math.h>

void function(int a[4][4], int n);

int main()
{
	int a[4][4];
	int n = 9;

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("a[%d][%d] =", i, j);
			scanf_s("%d", &a[i][j]);
		}
		printf("\n");
	}
	function(a,n);
	printf("左下半边边角元素中的值乘以n的值的结果是：\n");
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("a[i][j]=%d\t", a[i][j]);
		}
		printf("\n");
	}
		return 0;
}

void function(int a[4][4], int n)
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			a[i][j] *= n;
		}
	}
}