#this is a quick sort
#include<stdio.h>

void Qsort(int a[], int start , in end)
{
	if(start>=end) return; #the lengh of array is less than 1;
	int key;
	key = a[start];
	int i = start;
	int j = end;
	int temp;
	while(i<j)
	{
		while(i<j&&a[i]<=key) i++;#左右指针未相遇且a[i]小于key
		while(i<j&&a[j]>key)  j--;#a[j]大于key
		if(i<j)#交换a[i]与a[j]
		{
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
		}
	}
#pose the key in the correct place
	temp = a[start];
	a[start] = a[i];
	a[i] = temp;
#递归调用左半部分与右半部分
	Qsort(a, start, i-1);
	Qsort(a, i+1, end);
	return;
}





