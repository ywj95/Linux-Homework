#include "include/bubblesort.h"

/*起泡排序*/
void BubbleSort(int r[],int n)
{
	int i, j;
	int t;
	for (i = 1; i<n + 1; i++)
	{
		for (j = 1; j<(n + 1 - i); ++j)
		{
			if (r[j]>r[j + 1])
			{
				t = r[j];
				r[j] = r[j + 1];
				r[j + 1] = t;
			}
		}
	}
}
