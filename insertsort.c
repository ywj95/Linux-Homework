#include "include/insertsort.h"

/*直接插入排序*/
void InsertSort(int r[],int n)
{
	int i, j;
	for (i = 2; i<(n + 1); ++i)
	{
		if (r[i]<r[i - 1])
		{
			r[0] = r[i];
			r[i] = r[i - 1];
			for (j = i - 2; r[0] < r[j]; --j)
			{
				r[j + 1] = r[j];
			}
			r[j + 1] = r[0];
		}
	}
}
