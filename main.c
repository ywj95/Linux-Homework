#include<stdio.h>

#include "include/bubblesort.h"
#include "include/insertsort.h"
#include "include/selectsort.h"

int main()
{
	int n=10;
	int i;
	int r1[11]={0,0,9,5,6,7,3,4,1,2,8};
	int r2[11]={0,0,9,5,6,7,3,4,1,2,8};
	int r3[11]={0,0,9,5,6,7,3,4,1,2,8};
	printf("未排序：\n");
	for(i=1;i<n+1;++i)
	{
		printf("%d ",r1[i]);
	}
	printf("\n");
	BubbleSort(r1,n);
	InsertSort(r2,n);
	SelectSort(r3,n);
	printf("冒泡排序后：\n");
	for(i=1;i<n+1;++i)
	{
		printf("%d ",r1[i]);
	}
	printf("\n");
	printf("插入排序后：\n");
	for(i=1;i<n+1;++i)
	{
		printf("%d ",r2[i]);
	}
	printf("\n");
	printf("选择排序后：\n");
	for(i=1;i<n+1;++i)
	{
		printf("%d ",r3[i]);
	}
	printf("\n");
	return 0;
}
