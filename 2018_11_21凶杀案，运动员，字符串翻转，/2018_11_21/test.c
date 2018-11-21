#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>
//日本凶杀案
//int main()
//{
//	int killer = 'A';
//	for (killer = 'A'; killer <= 'D'; killer++)
//	{
//		if (((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer == 'C')) == 3)
//			printf("%c", killer);
//	}
//	return 0;
//}
//
//fdfd
//hfh
int main()
{
	int a = 1, b = 1, c = 1, d = 1, e = 1;
	int ret = 0, n = 1;
	for (a = 1; a <= 5; a++)
	{
		
		for (b = 1; b <= 5; b++)
		{
			for (c = 1; c <= 5; c++)
			{
				for (d = 1; d <= 5; d++)
				{
					for (e = 1; e <= 5; e++)
					{
						ret = 0;
						if ((b == 2) + (a == 3) == 1 && (b == 2) + (e == 4) == 1 && (c == 1) + (d == 2) == 1 && (c == 5) + (d == 3) == 1\
							&& (e == 4) + (a == 1) == 1)
						{

							//printf("a=%d,b=%d,c=%d,d=%d,e=%d\n", a, b, c, d, e);
							//printf("\n");
							ret = ret | (1 << (a - 1));
							ret = ret | (1 << (b - 1));
							ret = ret | (1 << (c - 1));
							ret = ret | (1 << (d - 1));
							ret = ret | (1 << (e - 1));

							if (ret == 1 || ret == 3 || ret == 7 || ret == 15 || ret == 31)
								printf("a=%d,b=%d,c=%d,d=%d,e=%d\n", a, b, c, d, e);
						}
					}
				}
			}
		}

	}


	return 0;
}





//  00000--ret
//  00001 <<(a-1)   a==1
//  00001--ret
//  00100 1<<(b-1)  b==3
//  00101--ret
//  00100 1<<(c-1)  c==3
//  00101 
//  00010 1<<(d-1) d==2
//  00111
//#include<assert.h>
//char* reverse(char *str,int n,int len)
//{
//	assert(str);
//	char* p = str;
//	int tmp = n % len;
//	int i = 0;
//	for (i = 0; i < tmp; i++)
//	{
//		char b = *str;
//		memmove(str, str + 1, len);
//		str[len-1] = b;
//	}
//	return p;
//
//}
//int main()
//{
//	char s[20];
//	int n = 0, num = 0;
//	printf("请输入字符串\n");
//	gets(s);
//	printf("请输入翻转次（个）数");
//	scanf("%d", &n);
//	num = strlen(s);
//	reverse(s, n, num);
//	puts(s);
//	return 0;
//}

//abcd1234
//bcd1234a
//

