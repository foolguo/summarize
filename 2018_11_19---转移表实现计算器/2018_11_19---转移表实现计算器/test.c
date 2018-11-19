#define _CRT_SECURE_NO_DEPRECATE 1
 
#include<Windows.h>
//void menu()
//{
//	printf("*******************\n");
//	printf("**1.Add***2.Sub****\n");
//	printf("**3.Mul***4.Div****\n");
//	printf("**********0.exit****\n");
//
//
//}
//
//int Add(int x, int y)
//{
//	return (x + y);
//}
//
//int Sub(int x, int y)
//{
//	return (x - y);
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	if (y == 0)
//	{
//		printf("除数不能为0\n");
//		return 0;
//	}
//	return x / y;
//}
//int main()
//{
//	int x = 0, y = 0, input = 1;
//	int(*p[5])(int x, int y) = { 0,Add,Sub,Mul,Div};
//	while(input)
//	{
//		menu();
//	printf("请选择功能\n");
//	scanf("%d", &input);
//	if (input >= 1 && input <= 4)
//	{
//		printf("请输入操作数\n");
//		scanf("%d%d",&x,&y);
//		printf("%d\n", (*p[input])(x,y));
//	}
//	else
//	{
//		exit(0);
//	}
//
//	}
//	return 0;
//}


//int main()
//{
//	char p[]="acbdbfbfbfb";
//	char* ch = "abcdef";
//	printf("%s", strncpy(p, ch, 8));
//
//	return 0;
//}
//int main()
//{
//	char p[] = "_hahahha,gun*lalala";
//
//	char *ch = NULL;
//	ch=  strtok(p,"_,*");
//	while (ch )
//	{
//		printf("%s\n",ch);
//		ch=strtok(NULL,"_,*");
//
//	}
//	return 0;
//}

//int main()
//{
//	char p[] = "_hahahha,gun*lalala";
//	char *ch = NULL;
//	for (ch = strtok(p, "_,*"); ch; ch = strtok(NULL, "_,*"))
//	{
//		
//		printf("%s\n", ch);
//	}
//
//	return 0;
//}'
//
//int main()
//{
//	char p[15] = "hahahah";
//	char *ch = "gugugugu";
//	strncat(p, ch, strlen(ch));
//
//
//	return 0;
//}


//int main()
//{
//	int a[4] = { 1,2,3,4 };
//	int *ptr1 = (int *)(&a + 1);
//	int *ptr2 = (int*)((int)a + 1);
//	printf("%d   %d\n",ptr1[-1],*ptr2);
//	printf("%x   %x\n", ptr1[-1], *ptr2);
//
//
//	return 0;
//}


#include<assert.h>
//int compare(const void* x_, const void* y_)
//{
//	return *((int*)x_) > *((int*)y_);
//}

int compare(const void* x_, const void* y_)
{
	/*char *x = (char*)x_;
	char *y = (char*)y_;*/
	return strcmp(  *(char**)x_, *(char**)y_);




}
void swap(void* x_, void* y_,int size)
{
	////char* x = (char*)x_;
	////char* y = (char*)x_;
	int i = 0;

	for (i = 0; i < size; i++)
	{
		*((char*)x_ + i) ^= *((char*)y_ + i);
		*((char*)y_ + i) ^= *((char*)x_ + i);
		*((char*)x_ + i) ^= *((char*)y_ + i);

	}


}
void mysqort(void *base, int sz, int size, int (*compare)(const void*, const void*))
{

	assert(base);
	//char *base_ = (char*)base;
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0, flag = 0;
		for (j = 0; j < sz - i - 1; j++)
		{
			if (compare((char*)base + size * j, (char*)base + size * (j + 1)) > 0)
			{

				swap((char*)base + size * j, (char*)base + size * (j + 1),size);
				flag = 1;
			}
		}

		if (flag == 0)
		{
			break;
		}
	}
}



//int main()
//{
//	/*int a[] = {9,8,7,6,5,4,3,2,1}*/;
//	char *a[] = {"absd","bsfd","acfg","aaaa9"};
//
//	int i = 0;
//	mysqort(a, sizeof(a) / sizeof(a[0]), sizeof(int), compare);
//	for (i = 0; i < sizeof(a) / sizeof(a[0]); i++)
//	{
//		printf("%s\n", a[i]);
//	}
//
//	return 0;
//}

int my_strcmp(const char*str1, const char*str2)
{

	assert(str1);
	assert(str2);
	int ret = 0;
	while (!(ret = *str1 - *str2) && *str1)
		str1++, str2++;
	if (ret > 0)
	{
		return 1;
	}
	else if (ret < 0)
	{
		return -1;
	}
	return ret;
}

#include<stdio.h>
int main()
{
	char *str1 = "hanina";
	char *str2 = "hanimei";
	printf("%d\n", my_strcmp(str1, str2));



	return 0;
}