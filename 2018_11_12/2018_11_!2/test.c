#define _CRT_SECURE_NO_DEPRECATE 1

#include<stdio.h>
//int main()
//{
//	char *p[] = { "boyjiu","girls","babyl","first" };
//	char **pp[] = {p+1,p+2,p+3,p};
//	char*** ppp = pp+1;
//	printf("%s\n", ppp[-1][-1] + 3);
//
//	printf("%s\n", *--*++ppp + 3);
//	printf("%s\n", **++ppp);
//	printf("%s\n", *ppp[-2] + 3);
//	return 0;
//}


//
//int main()
//{
//	int a[4] = { 1,2,3,4 };
//	int *ptr1 = (int *)(&a + 1);
//	int *ptr2 = (int *)((int)a + 1);
//	printf("%x  %x", ptr1[-1], *ptr2);
//	return 0;
//}


//int main()
//{
//	int a[3][2] = { (0,1),(2,3),(4,5) };
//	int *p = a[1];
//	printf("%d", p[0]);
//	return 0;
//}
//
//int main()
//{
//	int aa[2][5] = {1,2,3,4,5,6,7,8,9,10};
//	int *p1 = (int *)(&aa + 1);
//	int *p2 = (int *)(*(aa + 1));
//	printf("%d %d ", *(p1 - 1), *(p2 - 1));
//	return 0;
//}
//
//int main()
//{
//
//	char *a[] = { "work","at","alibaba" };
//	char** pa = a;
//	pa++;
//	printf("%s\n", *pa);
//
//}
//void swap(void* x, void* y,int num)
//{
//	int i = 0;
//	for (i = 0; i < num; i++)
//	{
//		
//		*((char*)x + i) ^= *((char*)y + i);
//		*((char*)y + i) ^= *((char*)x + i);
//		*((char*)x + i) ^= *((char*)y + i);
//	}
//
//}
//int cmp_(const void *x, const void *y)
//{
//	return (*(int*)x) < (*(int*)y);
//}
//void bubble(void *a, int sz, int num, int (*cmp_)(void*, void*))
//{
//	int i = 0;
//	int flag = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (cmp_((char*)a + j * num, (char*)a + (j + 1)*num) > 0)
//			{
//				swap((char*)a + j * num, (char*)a + (j + 1)*num,num);
//				flag = 1;
//			}
//		}
//		if (flag == 0)
//		{
//			break;
//		}
//	}
//}
//void show(void *a, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *((int*)a+i));
//	}
//}
//int main()
//{
//	int a[9] = { 1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(a) / sizeof(a[0]);
//	bubble(a, sz, sizeof(int), cmp_);
//	show(a, sz);
//	return 0;
//}


#include<stdio.h>
#include<string.h>
int cmp_(void *x, void* y)
{
	//while ((*(char*)x)||(*(char*)y))
	//{
	//	if ((*(char*)x) == (*(char*)y))
	//	{
	//		((char*)x)++;
	//		((char*)y)++;
	//	}
	//	else if ((*(char*)x) > (*(char*)y))
	//	{
	//		return 1;
	//	}
	//	else
	//		return -1;
	//}


	return strcmp(*(char**)x, *(char**)y);
}

void swap(void *x, void* y,int num)
{
	int i = 0;
	for (; i < num; i++)
	{
		*((char*)x + i) ^= *((char*)y + i);
		*((char*)y + i) ^= *((char*)x + i);
		*((char*)x + i) ^= *((char*)y + i);

	}
}
void bubble(void** p, int sz, int num, int cmp_(void *, void*))
{
	int i = 0;
	int flag = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		flag = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (cmp_((char*)p + j * num, (char*)p + (j + 1)*num) > 0)
			{
		      swap((char*)p + j * num, (char*)p + (j + 1)*num,num);
			  flag = 1;
			}
		}
		if (flag == 0)
		{
			break;
		}
	}
}



int main()
{
	char *p[] = { "bbbb","aaaa","cccc","dddd" };
	int i = 0, j = 0;
	bubble(p, sizeof(p) / sizeof(p[0]),sizeof(char),cmp_ );
	for (i = 0; i < sizeof(p) / sizeof(p[0]); i++)
	{
		printf("%s\n", p[i]);

	}
	return 0;
}




//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <windows.h>
//#include <string.h>
//#include <assert.h>
//
//
//
//int char_cmp(const void* x, const void* y)
//{
//	assert(x && y);
//
//	//因为数组里存的是字符串的地址，所以要强制类型转换成(char **)
//	//然后再解引用一下才是字符串的地址
//	return strcmp(*(char**)x, *(char**)y);
//
//}
//
//void swap(void* x, void* y, int size)
//{
//
//	int i = 0;
//
//	for (i = 0; i < size; i++)
//	{
//		*((char*)x + i) ^= *((char*)y + i);
//		*((char*)y + i) ^= *((char*)x + i);
//		*((char*)x + i) ^= *((char*)y + i);
//	}
//}
//
////用冒泡排序模拟实现Qsort函数
//void MyQsort(void* base, int count, \
//	int size, int(*compare)(const void*, const void*))
//{
//	int i = 0;
//	int j = 0;
//
//	for (i = 0; i < count - 1; i++)
//	{
//		for (j = 0; j < count - 1 - i; j++)
//		{
//			if (compare((char*)base + j * size, (char*)base + (j + 1)*size) > 0)
//			{
//				swap((char*)base + j * size, (char*)base + (j + 1)*size, size);
//			}
//		}
//	}
//}
//
//int main(void)
//{
//	char *arr[] = { "dddd", "bbbb", "cccc", "aaaa", "eeee" };
//	int i = 0;
//
//	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		printf("%s ", arr[i]);
//	}
//	printf("\n");
//
//	//调用库函数来排序
//	//因为字符串数组里面保存的都是指针
//	//所以size在传参的时候要传指针的大小
//	//qsort(arr, sizeof(arr) / sizeof(arr[0]), sizeof(char*), char_cmp);
//
//	//for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	//{
//	//	printf("%s ", arr[i]);
//	//}
//	//printf("\n");
//
//	MyQsort(arr, sizeof(arr) / sizeof(arr[0]), sizeof(char*), char_cmp);
//	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		printf("%s ", arr[i]);
//	}
//	printf("\n");
//
//	system("pause");
//	return 0;
//}
