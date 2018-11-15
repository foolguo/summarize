#define _CRT_SECURE_NO_DEPRECATE 1


//1.实现strcpy 
//2.实现strcat
//3.实现strstr
//4.实现strchr
//5.实现strcmp
//6.实现memcpy
//7.实现memmove

//
//#include <stdio.h>
//#include<assert.h>
//char* my_strcpy(char* str1, const char* str2)
//{
//	assert(str1);
//	assert(str2);
//	char *p = str1;
//	while (*str1++ = *str2++)
//		;
//	
//	return p;
//	
//
//}
//int main()
//{
//	char str1[20];
//	char *str2 = "yalihao";
//	my_strcpy(str1,str2);
//	printf("%s\n",str1);
//	return 0;
//}

//2.实现strcat

//#include<stdio.h>
//#include<assert.h>
//char* my_strcat(char* str1, const char* str2)
//{
//	assert(str1);
//	assert(str2);
//	char *p = str1;
//	while (*str1++)
//		;
//	str1=str1 - 1;
//	while (*str1++ = *str2++)
//		;
//	return p;
//}
//int main()
//{
//		char str1[16]="buyouyou";
//		char *str2 = "yalihao";
//		my_strcat(str1,str2);
//		printf("%s\n",str1);
//		return 0;
//}


//#include<stdio.h>
//#include<assert.h>
//#include<string.h>
////3.实现strstr
//char* my_strstr(const char* str1, const char* str2)
//{
//	assert(str1);
//	assert(str2);
//	int len = strlen(str2);
//	int len1 = strlen(str1);
//	int i = 0;
//	for (i = 0; i < len1; i++)
//	{
//		int j = 0, count = 0;
//		char* p = str2;
//		for (j = 0; j < len; j++)
//		{
//			if (*str1 == *p)
//			{
//				str1++;
//				p++;
//				count++;
//			}
//			else
//				break;
//		}
//		if (len == count)
//		{
//			return str1 - len;
//		}
//		else
//		{
//			str1 = str1 -count+1;
//		}
//	}
//	return NULL;
//
//}
//
//int main()
//{
//	char str1[] = "nish";
//	char str2[] = "pi";
//	char *p=my_strstr(str1, str2);
//	printf("%s\n", p);
//	return 0;
//}



//#include<assert.h>
//#include<stdio.h>
//char* my_strchr(const char *p, char c)
//{
//	assert(p);
//	while (*p)
//	{
//		if (*p++ == c)
//			return p -1;
//		
//	}
//	return NULL;
//
//}
//
//int main()
//{
//	char *p = "hehchah";
//	char c = 'a';
//	printf("%s",my_strchr(p, c));
//
//
//	return 0;
//}


////5.实现strcmp
//
//#include<stdio.h>
//#include<assert.h>
//
//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1);
//	assert(str2);
//	while (*str1 || *str2)
//	{
//		if (*str1 > *str2)
//			return 1;
//		else if (*str1 < *str2)
//			return -1;
//		else return 0;
//		str1 = str1 + 1;
//		str2 = str2 + 1;
//	}
//
//}
//int main()
//{
//	char* str1 = "absdf";
//	char* str2 = "absss";
//	int ret=my_strcmp(str1, str2);
//	printf("%d", ret);
//	return 0;
//}


////6.实现memcpy
//#include<stdio.h>
//#include<assert.h>
//void *memcpy(void *dest, const void* src, int size)
//{
//	assert(dest);
//	assert(src);
//	void *p = dest;
//	char* dest_ = (char*)dest;
//	char *src_ = (char*)src;
//	while (size--)
//	{
//		*dest_ = *src_;
//		dest_++;
//		src_++;
//	}
//	return p;
//}
//int main()
//{
//	int a[4];
//	int i = 0;
//	int b[4] = { 1,2,3,4 };
//	memcpy(a, b, sizeof(b));
//	for (i = 0; i < sizeof(a)/sizeof(a[1]); i++)
//	{
//		printf("%d ", a[i]);
//	}
//
//	return 0;
//}