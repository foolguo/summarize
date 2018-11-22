#define _CRT_SECURE_NO_DEPRECATE 1

#include<stdio.h>
#include<stdlib.h>
//int main()
//{
//	int a = 0;
//	int *ptr=NULL;
//	int i = 0;
//
//	scanf("%d", &a);
//	ptr = (int*)malloc(a * sizeof(int));
//	if (ptr)
//	{
//		for (i = 0; i < a; i++)
//		{
//			*(ptr + i) = i + 1;
//		}
//	}
//	for (i = 0; i < a; i++)
//	{
//		printf("%d ", *(ptr + i));
//
//	}
//	free(ptr);
//
//	return 0;
//}
//int FindBit(int x_)
//{
//	int flag_ = 0, count = 0;
//	while (x_)
//	{
//		flag_ = x_ - 1;
//		x_ = flag_ & x_;
//		count++;
//	}
//	return count;
//}
////int main()
////{
////	int n = 0;
////	int i = 0;
////	printf("请输入数字\n");
////	scanf("%d", &n);
////	printf("%d",FindBit(n));
////	return 0;
////}
//
//int FindDiff(int n, int m)
//{
//
//	return FindBit(n^m);
//
//}
//int main()
//{
//	int n = 0, m = 0;
//	printf("Please Enter\n");
//	scanf("%d%d", &n, &m);
//	printf("%d",FindDiff(n, m));
//
//	return 0;
//}

//翻转二进制位
//01001101
//10000000
//00000001
//00000000
//00000001
// 

//int main()
//{
//
//	printf("%d", printf("1"));
//	return 0;
//}

//union X
//{
//	int i;
//	char j;
//
//}x;
//int main()
//{
//	x.j = 1;
//	if (x.j == 1)
//		printf("小\n");
//	else
//		printf("大\n");
//
//	return 0;
//}
//
//enum Day
//{
//	d1=1,
//	d2,
//	d3,
//	d4,
//	d5=1,
//	d6,
//	d7
//};
//int main()
//{
//	//enum Day x;
//
//	int x = d1;
//	printf("%d\n", x);
//	printf("%d,%d,%d,%d,%d,%d,%d\n", d1, d2, d3, d4, d5, d6, d7);
//
//}

//位段
//struct C
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//
//};
//int main()
//{
//	printf("%d", sizeof(struct C));
//
//
//	return 0;
//}


//union Un1
//{
//	char c[5];
//	int i;
//};
//union Un2
//{
//	short c[7];
//	int i;
//};
//
//int main()
//{
//	printf("%d\n", sizeof(union Un1));
//	printf("%d\n", sizeof(union Un2));
//
//	return 0;
//}

//输出100~200素数
#include<math.h>
//int main()
//{
//	int i = 0, j = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		for (j = 2; j <=sqrt(i) ; j++)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//		}
//		if (j>sqrt(i))
//		{
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}

//int Print(int i)
//{
//	return (!(i % 4) && (i % 100)) || (!(i % 400));
//}
//int main()
//{
//	int i = 0, count = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		
//		if (1 == Print(i))
//		{
//			printf("%d is LEPyear\n", i);
//			count++;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}
//void swap(int* x, int* y)
//{
//
//	*x ^= *y;
//	*y ^= *x;
//	*x ^= *y;
//
//}
//int main()
//{
//	int x = 0, y = 0;
//	scanf("%d%d", &x, &y);
//	printf("x=%d,y=%d\n", x, y);
//	swap(&x, &y);
//	printf("x=%d,y=%d\n", x, y);
//
//
//	return 0;
//}
//a b c
//void compare(int *x, int* y)
//{
//	if (*x < *y)
//	{
//		*x ^= *y;
//		*y ^= *x;
//		*x ^= *y;
//
//	}
//}
//int main()
//{
//	int a = 0, b = 0, c = 0;
//	printf("Please Enter\n");
//	scanf("%d%d%d",&a,&b,&c );
//	compare(&a,& b);
//	compare(&a, &c);
//	compare(&b, &c);
//	printf("%d %d %d", a, b, c);
//	return 0;
//}

//最大公约数

//辗转相除法
// a/b      12  8
// s=a%b    12  8  4
// b=s    
// a=b


//int main()
//{
//	int a = 12, b = 8;
//	printf("Please Enter\n");
//	while ( a % b)
//	{
//		 
//		b = a % b;
//		a = b;
//
//
//	}
//
//	printf("%d", a);
//
//	return 0;
//}

//int main()
//{
//	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int b[10] = { 10,9,8,7,6,5,4,3,2,1 };
//	int c[10];
//	int i = 0;
//	memcpy(c, a, sizeof(a));
//	memcpy(a, b, sizeof(b));
//	memcpy(b, c, sizeof(c));
//	for (i = 0; i < sizeof(a) / sizeof(a[0]); i++)
//	{
//		printf("%d ",a[i]);
//	}
//	printf("\n");
//	for (i = 0; i < sizeof(a) / sizeof(a[0]); i++)
//	{
//		printf("%d ", b[i]);
//	}
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	float n = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		n += 1.0 / i;
//
//	}
//	printf("%f\n", n);
//	return 0;
//}

//int main()
//{
//	int i = 0, count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			count++;
//		if (i / 10 == 9)
//			count++;
//	}
//	printf("%d", count);
//
//	return 0;
//}

//水仙花数
//#include<stdio.h>
//int main()
//{
//	int n = 0, count = 0;
//	for (n = 0; n <= 99999; n++)
//	{
//		int s = n, c = 0;
//		while (s %10)
//		{
//			s /=  10;
//			count++;
//		}
//		s = n;
//		while (s)
//		{
//			c += (s%10)*(s%10)*(s%10);
//			s /= 10;
//		}
//		if (c == n)
//		{
//			printf("%d ", n);
//		}
//	}
//
//
//	return 0;
//}