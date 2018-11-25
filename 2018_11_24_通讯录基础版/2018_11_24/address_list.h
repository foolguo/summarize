#define _CRT_SECURE_NO_DEPRECATE 1

#ifndef __address_list_H_
#define __address_list_H_
#include<stdio.h>
#include<string.h>
typedef struct address_list
{
	char name[10];
	char sex[6];
	char age[3];
	char tel[12];
	char address[30];
} address_list;
#define SZ 1000
void add(address_list* addr, int sz);
void del(address_list* addr, char* p);
int find(address_list* addr, char* p);
void modify(address_list* addr, char* p);
void display(address_list* addr);
void empty(address_list*  addr);
void sort(address_list*  addr);
void sever(address_list *addr);

#endif

