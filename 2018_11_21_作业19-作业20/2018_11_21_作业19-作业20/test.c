#define _CRT_SECURE_NO_DEPRECATE 1

#include<stdio.h>
#include<assert.h>
//char* my_strncpy(char* des, const char* src, int sz)
//{
//	assert(des);
//	assert(src);
//	int i = 0;
//	char *p = des;
//	while (i < sz)
//	{
//		*des++ = *src++;
//		i++;
//	}
//	return p;
//}
//int main()
//{
//	char *str = "abcdef";
//	char des[] = "bbbbbb";
//	char *p=my_strncpy(des, str,4);
//	printf("%s\n", p);
//	return 0;
//}

//char* my_strncat(char* des, const char* src, int sz)
//{
//	assert(des);
//	assert(src);
//	int i = 0;
//	char *p = des;
//	while (*des)
//	{
//		des++;
//	}
//	while (i < sz)
//	{
//		*des++ = *src++;
//		i++;
//	}
//    return p;
//	
//}
//int main()
//{
//	char *str = "abcdef";
//	char des[15] = "bbbbbb";
//	char *p=my_strncat(des, str,strlen(str));
//	printf("%s\n", p);
//	return 0;
//}
//int my_strncmp(char *str1, char*str2, int n)
//{
//	assert(str1);
//	assert(str2);
//	int ret = 0;
//	while (!(ret = *str1 - *str2) && *str1&&(n-1))
//	{
//		str1++; str2++;
//		n--;
//	}
//	if (ret > 0)
//		ret = 1;
//	else if (ret < 0)
//		ret=-1;
//	return ret;
//}
//
//int main()
//{
//	char *str1 = "hahaha";
//	char *str2 = "heheheh";
//	int n=my_strncmp(str1, str2, 2);
//	printf("%d", n);
//	return 0;
//}
