
   //数9的个数 编写程序数一下，从1到100的所有整数中有出现过多少个9.

#include<stdio.h>

int main()
{
	int i = 0;
	int count = 0;
	for (i = 1; 1 <= 100; i++)
	{
		if (i % 10 == 9)
			count++;
		if (i % 100 == 9)
			count++;

		//else if (i % 100 == 9)
			//count++;


	}
	printf("count = %d\n", count);
	return 0;
}


   //分数求和  计算1/1-1/2+1/3-1/4+.....+1/99-1/100 的值 

int main()
{
	int i = 0;
	double sum = 0.0;// double 才能切确到小数点
	int flag = 1;
	for (i = 1; i <= 100; i++)
	{
		sum += flag * 1.0 / i;
		flag = -flag;
	}
	printf("%lf\n", sum);
	return 0;
}



   //求最大值   求10个数中的最大值

int main()
{
	int arr[] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
	int max = arr[0];//定义max 为最大值 将max arr 数组中的数比较 如果 数字比max大 则将数字赋值给max
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];

		}
	}
	printf("max = %d", max);
	return 0;
}


    //在屏幕上输出9*9c乘法口诀表



int main()
{
	int i = 0;
	//确定打印9行
	for (i = 1; i <= 9; i++)
	{
		//打印1行
		int j = 1;
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%-2d ", i, j, i * j);// %2d 向右靠齐  %-2d 向左靠齐

		}
		printf("\n");


	}
	return 0;