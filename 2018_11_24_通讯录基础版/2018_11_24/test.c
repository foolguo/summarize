#define _CRT_SECURE_NO_DEPRECATE 1

//2.实现一个通讯录；
//通讯录可以用来存储1000个人的信息，每个人的信息包括：
//姓名、性别、年龄、电话、住址
//提供方法：
//1. 添加联系人信息
//2. 删除指定联系人信息
//3. 查找指定联系人信息
//4. 修改指定联系人信息
//5. 显示所有联系人信息
//6. 清空所有联系人
//7. 以名字排序所有联系人
//8. 保存联系人到文件
//9. 加载联系人


#include"address_list.h"


void menu()
{
	printf("****************************************\n");
	printf("*********** 1.add      2.del  **********\n");
	printf("*********** 3.find     4.modify **********\n");
	printf("*********** 5.display  6.empty **********\n");
	printf("*********** 7.sort     8.sever **********\n");
	printf("*********** 9.loading  0.exit **********\n");
}

int main()
{
	address_list addr[SZ] = { {0},{0},0,{0},{0} };
	int input = 0, n = 0;
	do
	{
		menu();
		printf("please select\n");
		scanf("%d", &input);
		if (input < 0 && input>9)
		{
			printf("enter error Please enter again\n");

		}
		else
		{
			switch (input)
			{
			case 1:
			{
				printf("请输入要录入的人数\n");
				scanf("%d", &n);
				add(addr, n);
				break;
			}
			case 2:
			{
				char p[6] = { 0 };
				printf("请输入要删除联系人的名字\n");
				scanf("%s", p);
				del(addr, p);
				break;
			}
			case 3:
			{
				char p[6] = { 0 };
				printf("请输入要查找联系人的名字\n");
				scanf("%s", p);
				find(addr, p);
				printf("查找联系人的的位置\n");
				printf("%d\n", find(addr, p));
				break;
			}
			case 4:
			{
				char p[6] = { 0 };
				printf("请输入要修改联系人的名字\n");
				scanf("%s", p);
				modify(addr, p);
				printf("修改联系人的的位置\n");
				printf("%d\n", find(addr, p));
				break;

			}
			case 5:
			{
				display(addr);
				break;
			}
			case 6:
			{
				empty(addr);
				break;
			}
			case 7:
			{
				sort(addr);
				break;
			}
			case 8:
			{
				sever(addr, SZ);
				break;
			}
			}
		}
		}while (input);

		return 0;
	}