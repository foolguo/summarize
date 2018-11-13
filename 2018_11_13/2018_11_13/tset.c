#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>
////int compare(const void* x, const void* y)
////{
////	assert(x);
////	assert(y);
////	int* x_ = (int*)x;
////	int* y_ = (int*)y;
////	if (*x_ > *y_)
////		return 1;
////	else if (*x_ < *y_)
////		return -1;
////	else
////		return 0;
////}
////void show(int *a, int sz)
////{
////	int i = 0;
////	for (i = 0; i < sz; i++)
////	{
////
////		printf("%d ", a[i]);
////	}
////	printf("\n");
////}
////void swap(void* x, void* y, int size)
////{
////	int i = 0;
////	 /*(char*)x;
////	 (char*)y;*/
////	for (i = 0; i < size; i++)
////	{
////		*((char*)x+i) ^= *((char*)y+i); 
////		*((char*)y + i) ^= *((char*)x + i);
////
////		*((char*)x + i) ^= *((char*)y + i);
////
////
////	}
////}
////void Myqsort(void* base, int sz, int size, int (*compare)(const void*, const void*))
////{
////	char *p = (char*)base;
////	int i = 0, flag = -1;
////	for (; i < sz - 1; i++)
////	{
////		int j = 0;
////		flag = 0;
////		for (j = 0; j < sz - 1 - i; j++)
////		{
////			if (compare(p + j * size, p + (j + 1)*size) > 0)
////			{
////				swap(p + j * size, p + (j + 1)*size,size);
////				flag = 1;
////			}
////		}
////		if (flag == 0)
////		{
////			break;
////		}
////
////	}
////}
////int main()
////{
////	int a[] = { 2,3,5,6,8,-1,0,9,7,4 };
////	/*qsort(a, sizeof(a) / sizeof(a[0]), sizeof(int), compare);*/
////	Myqsort(a, sizeof(a) / sizeof(a[0]), sizeof(int), compare);
////	show(a, sizeof(a)/sizeof(a[0]));
////
////	return 0;
////}
//
////int compare(const void *x,const void *y)
////{
////	return strcmp(*(char**)x, *(char**)y  );
////}
////void show(char* *base, int sz)
////{
////	int i = 0;
////	for (; i < sz; i++)
////	{
////		printf("%s\n", base[i]);
////	}
////	printf("\n");
////}
////int main()
////{
////	char *base[] = { "eeee","aaaa","cccc","ffff" };
////	/*qsort(base, sizeof(base) / sizeof(base[0]), sizeof(char*), compare);*/
////	int i = 0;
////	for (; i < sizeof(base) / sizeof(base[0]); i++)
////		printf("%s\n", base[i]);
////	printf("\n");
////	show(base, sizeof(base) / sizeof(base[0]));
////	return 0;
////
////}
//
//
//
////  base一个char类型指针数组，存放的是指针
////  数组传参会发生降维 ，降成指向其内部元素类型的参数
////  所以  char** base； 靠近base的 “*”代表base 是一个指针；\
//// 另一个代表指向内部元素是“指针类型”（地址）
////%s ，可以直接输出字符串。。。。。。  看着办吧
////开始重写
//
//
//void swap()
//{
//}
//
//int compare(const void* x, const void* y)
//{
//	assert(x);
//	assert(y);
//	return strcmp(*(char**)x, *(char**)y);
//}
//
//
//
////void* 可以接收任何类型的指针
//void myqsort(void* base, int sz, int size, int(*compare)(const void*,const void*))
//{
//	assert(base);
//	int i = 0, flag = -1;
//	for (; i < sz-1; i++)
//	{
//		int j = 0;
//		flag = 0;
//		for (j = 0; i < sz - i - 1; j++)
//		{
//			if ((compare( (char**)base + j*size,(char**)base + (j + 1)*size)) > 0)
//			{
//				swap();
//			}
//		
//		}
//
//
//	}
//}
//int main()
//{
//	char *p[] = { "ssss","dddd","aaaa","cccc" };
//	myqsort(p, sizeof(p) / sizeof(p[0]), sizeof(char*), compare);
//
//
//
//}

//int compare(char* x, char* y)
//{
//	return strcmp(x, y);
//}
//void swap(char* x, char* y,int size)
//{
//	int i = 0;
//
//	for (i = 0; i < size; i++)
//	{
//		*(x + i) ^= *(y + i);
//		*(y + i) ^= *(x + i);
//		*(x + i) ^= *(y + i);
//	}
//}
//void myqsort(char** base, int sz, int size,int (*compare)(char*,char*))
//{
//	assert(base);
//	int i = 0;
//	for (i = 0; i < sz-1; i++)
//	{
//		int j = 0;
//		for (j = 0; i < sz - i - 1; j++)
//		{
//			if (compare(*base, *(base + j)) > 0)
//			{
//				swap(*base, *(base + j),size);
//			}
//
//		}
//	}
//
////
////}
////int main()
////{
////	char *base[] = { "aaaa","FFFf","gggg","llll" };
////
////	myqsort(base, sizeof(base) / sizeof(base[0]), sizeof(char*), compare);
////	return 0;
////
////}
int compare(const void *x_,const void* y_)
{
	assert(x_);
	assert(y_);
	char **x = (char**)x_;
	char **y = (char**)y_;
	return strcmp(*x, *y);
}
void swap(char* x, char* y,int size)
{
	int i = 0;

	for (i = 0; i < size; i++)
	{
		*(x + i) ^= *(y + i);
		*(y + i) ^= *(x + i);
		*(x + i) ^= *(y + i);
	}
}

void myqsort(void* base, int sz, int size, int(*compare)(const void*, const void*))
{
	assert(base);
	char **p = (char**)base;
	int i = 0, j = 0;
	for (i = 0; i < sz-1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (compare(p , p + j) > 0)
			{
				swap(*p, *(p + j), size);
			}
                  
		}


	}
}

int main()
{
	char *p[] = { "fff","ddd","eee" };
	myqsort(p, sizeof(p) / sizeof(p[0]), sizeof(char*), compare);
	int i = 0;
	for (; i < sizeof(p) / sizeof(p[0]); i++)
	{

		printf("%s ", p[i]);
	}
	return 0;
}