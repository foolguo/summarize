#define _CRT_SECURE_NO_DEPRECATE 1

//2.ʵ��һ��ͨѶ¼��
//ͨѶ¼���������洢1000���˵���Ϣ��ÿ���˵���Ϣ������
//�������Ա����䡢�绰��סַ
//�ṩ������
//1. �����ϵ����Ϣ
//2. ɾ��ָ����ϵ����Ϣ
//3. ����ָ����ϵ����Ϣ
//4. �޸�ָ����ϵ����Ϣ
//5. ��ʾ������ϵ����Ϣ
//6. ���������ϵ��
//7. ����������������ϵ��
//8. ������ϵ�˵��ļ�
//9. ������ϵ��


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
				printf("������Ҫ¼�������\n");
				scanf("%d", &n);
				add(addr, n);
				break;
			}
			case 2:
			{
				char p[6] = { 0 };
				printf("������Ҫɾ����ϵ�˵�����\n");
				scanf("%s", p);
				del(addr, p);
				break;
			}
			case 3:
			{
				char p[6] = { 0 };
				printf("������Ҫ������ϵ�˵�����\n");
				scanf("%s", p);
				find(addr, p);
				printf("������ϵ�˵ĵ�λ��\n");
				printf("%d\n", find(addr, p));
				break;
			}
			case 4:
			{
				char p[6] = { 0 };
				printf("������Ҫ�޸���ϵ�˵�����\n");
				scanf("%s", p);
				modify(addr, p);
				printf("�޸���ϵ�˵ĵ�λ��\n");
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