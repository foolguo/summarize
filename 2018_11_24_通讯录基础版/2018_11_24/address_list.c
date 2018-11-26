#include"address_list.h"
static int flag = 0;
void add(address_list* addr, int sz)//添加联系人信息
{
	int i = 0;
	int a = 0;
	if (flag < SZ)
	{
		for (i = flag; i < sz; i++)
		{
			printf("name:\n");
			scanf("%s", (addr + i)->name);
			printf("sex:\n");
			scanf("%s", (addr + i)->sex);
			printf("age:\n");
			scanf("%s", (addr + i)->age);
			printf("tel:\n");
			scanf("%s", (addr + i)->tel);
			printf("address:\n");
			scanf("%s", (addr + i)->address);
			flag++;
		}
	}
	else
		printf("通讯录已满\n");

}
void del(address_list* addr,char *p)// 首先查找联系人，然后删除；
{
	if (flag == 0)
	{
		printf("当前通信录为空\n");
	}
	else
	{
		
		int i = find(addr, p);
		memset(addr + i, '*', sizeof(address_list));
		memmove(addr + i, addr + i + 1, sizeof(address_list)*(SZ - i - 1));
		flag--;
	}
}
int find(address_list* addr, char* str)//查找联系人，  长度一样， 每个字符一样
{
	char* p = str;
	int i = 0,j=0;
	for (i = 0; i < flag; i++)
	{
		if (strcmp((addr + i)->name, p) == 0)
			return i;
		else
			return -1;
	}
	//while (left <= right)
	//{
	//	mid = (left&right) + (left^right) >> 1;
	//	if(addr])


	//}

}

void modify(address_list* addr, char* p)// 修改指定联系人信息
{
	int i = find(addr, p);
	printf("modify name:\n");
	scanf("%s", (addr + i)->name);
	printf("modify sex:\n");
	scanf("%s", (addr + i)->sex);
	printf("modify age:\n");
	scanf("%s", (addr + i)->age);
	printf("modify tel:\n");
	scanf("%s", (addr + i)->tel);
	printf("modify address:\n");
	scanf("%s", (addr + i)->address);
	
}

void display(address_list* addr)
{
	int i = 0;
	printf("name	sex		age		tel		address\n");
	for (i = 0; i < flag; i++)
	{
		
		printf("name: %s\n", ((addr + i)->name));
		printf("sex: %s\n", ((addr + i)->sex));
		printf("age: %s\n", ((addr + i)->age));
		printf("tel: %s\n", ((addr + i)->tel));
		printf("address: %s\n", ((addr + i)->address));
		printf("\n");
	}

}
void empty(address_list*  addr)
{
	int i = 0;
	for (i = 0; i < flag; i++)
	{
		memset(addr + i, "0", sizeof(address_list));
	}
	flag = 0;
}
void sort(address_list*  addr)
{
	int i = 0; int n = 0;
	for (i = 0; i < flag-1; i++)
	{
		int j = 0;
		for (j = 0; j < flag - 1 - i; j++)
		{
			address_list tmp;
			if (strcmp((addr + j)->name, (addr + j + 1)->name))
			{
				memcpy(&tmp,addr+j,sizeof(address_list));
				memcpy(addr + j,addr+j+1,sizeof(address_list));
				memcpy( addr + j+1, &tmp,sizeof(address_list));
				n = 1;
			}
			if (n == 0)
				break;
		}
	}
}
void sever(address_list *addr)
{

	FILE *pf = fopen("address_list.txt","w+");
	int i = 0;
	if (pf != NULL)
	{
		for (i = 0; i < flag; i++)
		{
			fputs(addr+i, pf);
			fclose(pf);
		}
	}
}