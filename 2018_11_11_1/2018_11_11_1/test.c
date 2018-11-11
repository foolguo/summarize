#define _CRT_SECURE_NO_DEPRECATE 1


#include<stdio.h>
//void show(int(*p)[5], int sz)
//{
//	int i = 0, j = 0;
//	for (i = 0; i < sz; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%3d ", p[i][j]);
//		}
//
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[5][5] = { 0 };
//	int i = 0, j = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (; i < sz; i++)
//	{
//		arr[i][0] = 1;
//		arr[i][i] = 1;
//	}
//	for (i = 2; i < sz; i++)
//	{
//		for (j = 1; j < sz - 1; j++)
//		{
//			arr[i][j] = arr[i-1][j] + arr[i-1][j-1];
//		}
//	}
//	show(arr, sz);
//
//		return 0;
//}

//int FindDif(int *a, int sz)
//{
//	int i = 1;
//	int flag = a[0];
//	for (; i < sz; i++)
//	{
//		flag ^= a[i];
//
//	}
//	return flag;
//
//
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,1,2,3,4,5,6,8 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d",FindDif(arr, sz));
//
//	return 0;
//}


// 字符串翻转
//局部反转
//整体翻转
//void Reverse(char* start, char* end)
//{
//
//	while (start < end)
//	{
//		*start ^= *end;
//		*end ^= *start;
//		*start ^= *end;
//		start++;
//		end--;
//	}
//}
//char* ResverStr(char *str)
//{
//	char* end = str;
//	char* start= end ;
//	while (*end)
//	{
//		if (*end == ' ')
//		{
//			Reverse(start, end-1);
//			end = end + 1;
//			start = end;
//		}
//		end++;	
//	}
//	Reverse(start, end - 1);
//	Reverse(str, end - 1);
//	return str;
//}
//int main()
//{
//	char str[] = "student a am i";
//	//            tneduts a ma i
//	//ResverStr(str);
//	printf("%s\n",ResverStr(str));
//
//
//	return 0;
//}

//奇数位于偶数前面
// 1、定义两个指向数组头和数组尾的指针
//2、对于头指针 如果是奇数，则不动 i++；
//3、对于尾指针，如果是偶数，则不动j--；

//void show(int *p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", p[i]);
//	}
//	printf("\n");
//}
////奇数位于偶数前面
//void Print(int *p, int sz)
//{
//	int i = 0;
//	int j = sz - 1;
//	int flag = 1;
//	while (i < j)
//	{
//		//找偶数换，奇数不变
//		while (p[i] & 1)
//		{
//			i++;
//		}
//		while (!(p[j] & 1))
//		{
//
//			j--;
//		}
//		p[i] ^= p[j];
//		p[j] ^= p[i];
//		p[i] ^= p[j];
//		i++;
//		j--;
//
//	}
//
//
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	show(arr, sz);
//	Print(arr, sz);
//	show(arr, sz);
//
//	return 0; 
//  }


//在杨氏矩阵找数
//void FindNum(int(*p)[4], int row, int key)
//{
//	int line_c = row - 1;
//	int line_r = 0;
//	while ((line_r<row)&&(line_c>=0))
//	{
//
//		if (key > p[line_r][line_c])
//		{
//			line_r++;
//		}
//		else if (key < p[line_r][line_c])
//		{
//			line_c--;
//		}
//		else
//			break;
//	}
//	printf("row  col:%d  %d\n", line_r + 1, line_c + 1);
//
//}
//
//int main()
//{
//	int arr[4][4] = {
//		{1,2,3,4},
//	    {3,4,5,6},
//	    {4,5,6,7},
//	    {7,8,9,10}
//	};
//	int row = sizeof(arr) / sizeof(arr[0]);
//	FindNum(arr, row, 6);
//
//
//	return 0;
//}

//左旋
//  1.常规方法  abcd    a
//  2.反转法 abcd
//           ab   cd
//           ba   dc
//           cdab

//3,  abcdabcd
//      cdab

//1
//#include<string.h>
//char* LeftCover(char *ch, int len, int step)
//{
//	char *p = ch;
//	int n = step % len;
//	int i = 0, j = 0;
//	for (i = 0; i < n; i++)
//	{
//		char tmp = p[0];
//		for (j = 1; j < len; j++)
//		{
//			p[j - 1] = p[j];
//		}
//		p[j-1] = tmp;
//	}
//
//	return ch;
//}
//int main()
//{
//	char ch[] = "abcd";
//	int step = 0;
//	int len = strlen(ch);
//	printf("Please Enter:");
//	scanf("%d", &step);
//	printf("%s\n",LeftCover(ch, len, step));
//	return 0;
//}

//  2.反转法 abcd
//           ab   cd
//           ba   dc
//           cdab
//#include<string.h>
//void Rervse(char* start, char* end)
//{
//	while (start < end)
//	{
//		*start ^= *end;
//		*end ^= *start;
//		*start ^= *end;
//		start++, end--;
//	}
//}
//char* LeftCover(char *ch, int len, int step)
//{
//	int n = step % len;//实际翻转次数
//	int i = 0;
//	char* start = ch;
//	char* end_ = ch + n-1;
//	char* end = start+len-1;
//	Rervse(start,end_);
//	end_ = end_ + 1;
//	start = end_;
//	Rervse(start, end);
//	Rervse(ch, end );
//	return ch;
//}
//int main()
//{
//	char ch[] = "abcd";
//	int step = 0;
//	int len = strlen(ch);
//	printf("Please Enter:");
//	scanf("%d", &step);
//	printf("%s\n",LeftCover(ch, len, step));
//	return 0;
//}


//3,  abcdabcd
//      cdab

//#include<string.h>
//int main()
//{
//	char p[] = "abcd";
//	char ch[] = "a";
//	int len = strlen(p), step = 0, n = 0;
//	printf("Please Enter:");
//	scanf("%d",&step);
//	strcpy(ch, p);
//	strcat(ch,p);
//	n = step % len;
//	strncpy(p,ch+n,len);
//	printf("%s\n", p);
//	return 0;
//}