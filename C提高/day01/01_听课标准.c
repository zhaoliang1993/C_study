#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//选择排序法
//如果数组作为函数式形参，数组会退化成指针
int paixu(int a[], int n)
{    
	int temp = 0;
	int buf;
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] > a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}

int main()
{
	int a[] = { 10, 7, 1, 9, 5, 4, 8, 3, 6, 2 };
	int n;
	n = sizeof(a) / sizeof(int);
	printf("排序前\n");
	for (int i = 0; i < n; i++)
	{
		printf("%d\t", a[i]);
	}

	printf("排序后\n");
	paixu(a, n);
	for (int i = 0; i < n; i++)
	{
		printf("%d\t", a[i]);
	}
	//如何看懂带算法的程序
	/*
	1.流程
	2.每个语句功能
	3.试数
	4.调试
	5.模仿改
	6.不看代码写

	*/

	
	system("pause");
	return 0;
}
