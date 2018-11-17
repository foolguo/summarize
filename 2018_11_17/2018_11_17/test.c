#define _CRT_SECURE_NO_DEPRECATE 1
//
#include<stdio.h>
#include<assert.h>
#include<string.h>
////int main()
////{
////	int a[10] ;
////	memset(a, 1, sizeof(a));//按字节操作  8比特位赋值 0000 0001
////	return 0;
////}
//#include<errno.h>
////
////int main()
////{
////	int i = 0;
////	for (i = 0; i < 100; i++)
////	{
////		printf("%d: %s\n",i,strerror(i));
////	}
////	return 0;
////}
//
//char* my_strstr(const char* str, const char* sub_str)
//{
//	char *sub = sub_str;
//	char *p = str;
//	while (*p)
//	{
//		p = str;
//		sub = sub_str;
//		while (*sub&&*p&&(*sub==*p))
//		{
//			sub++, p++;
//		}
//		if (*sub == '\0')
//		{
//			return str;
//		}
//		str++;
//	}
//	return NULL;
//}
//int main()
//{
//	char* str1 = "nishigezhu";
//	char* str2 = "shi";
//	char* ret =my_strstr(str1,str2);
//	printf("%s\n", ret);
//	return 0;
//}

//int main()
//{
//	const int  const* const  a = 1;
//	
//	a = 2;
//	printf("%p  %d",&a, a);
//	return 0;
//}

//void * my_memmove(char *str1_, const char *str2_,int size)//内存重叠问题
//{
//	assert(str1_);
//	assert(str2_);
//	char* des = (char*)str1_;
//	char* src = (char*)str2_;
//	if (src < des  &&des < src + size)
//	{
//		des = des + size - 1;
//		src = src + size - 1;
//		while (size--)
//		{
//			*des = *src;
//			des--, src--;
//		}
//	}
//	else {
//		while (size--)
//		{
//			*des = *src;
//			des++, src++;
//		}
//
//		return str1_;
//
//	}
//
//}
//int main()
//{
//	char str1[] = "asdf";
//	char *str2 = "bcdf";
//	my_memmove(str1,str1+1,sizeof(str1));
//	printf("%s\n", str1);
//	return 0;
//}


//
//1.理解
//一级指针
//二级指针
//指针和数组
//指针数组
//完成课堂代码和练习。
//
//写博客，将连接发给我。
//
//2.阅读《C语言深度剖析》指针章节。




//1.理解数组指针
//2.理解函数指针和定义
//3.理解函数指针数组和定义，转移表
//4.理解指向函数指针数组的指针和定义
//5.理解回调函数的使用
//6.完成课堂代码和练习。
//7.练习使用qsort函数排序各种类型的数据。
//8.模仿qsort的功能实现一个通用的冒泡排序。

//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int *p = a;
//	printf("%p\n", p);
//	printf("%p\n", p + 1);
//	printf("%d\n", *p);
//	printf("%d\n", *(p + 1));
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int *p=&a;
//	int **pp = &p;
//	int ***ppp= &pp;
//	*p = 10;
//	printf("a = %d,*p = %d,**pp = %d,***ppp = %d\n",a, *p, **pp, ***ppp);
//	return 0;
//}

//void fun(char **p)
//{
//
//}
//int main()
//{
//	char *p[] = { "abc","bcd","cdf" };
//	fun(p);
////	return 0;
////}
//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int *p;//*代表p是一个指针，指向int类型
//	int i = 0;
//		p = a;
//	for (i = 0; i < sizeof(a)/sizeof(a[0]); i++)
//	{
//		printf("%d  ", a[i]);
//		printf("%d  ", *(a + 1));
//		printf("%d  ", p[i]);
//		printf("%d  ", *(p + 1));
//	}
//	return 0;


int main()
{
	int arr[10] = { 0 };
	printf("%p\n", arr);
	printf("%p\n", arr + 1);
	printf("%p\n", &arr);
	printf("%p\n", &arr + 1);
		return 0;
}