#include "include/selectsort.h"

/*简单选择排序*/
void SelectSort(int r[],int n)
{
	int i, j, k;
	int t;
	for (i = 1; i<(n + 1); ++i)
	{
		k = i;
		for (j = i; j<(n + 1); ++j)
		{
			if (r[j]<r[k])
				k = j;
		}
		if (k != i)
		{
			t = r[i];
			r[i] = r[k];
			r[k] = t;
		}
	}
}
