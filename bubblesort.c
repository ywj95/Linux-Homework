#include<stdio.h>
#include"bubblesort.h"

void BubbleSort(int r[])
{
	comp = 0;
	move = 0;
	int i, j;
	int t;
	for (i = 1; i<MAXSIZE + 1; i++)
	{
		for (j = 1; j<(MAXSIZE + 1 - i); ++j)//每次内循环结束后，前(MAXSIZE+1-i)个中最大的数被筛选出来放在后面
		{
			if (r[j]>r[j + 1])//若顺序错误，则交换
			{
				t = r[j];
				r[j] = r[j + 1];
				r[j + 1] = t;
				move++;
			}
			comp++;
		}
	}
	printf("BubbleSort,compare: %d ,move: %d \n", comp, move);
}
