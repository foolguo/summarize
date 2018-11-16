

# 字符串翻转

### 过程

> **局部反转**

> **整体翻转**

```c
//  student a am i
//  第一步--局部翻转
//  tmeduts a ma i
//  第二步--整体翻转
```

代码

```c

void Reverse(char* start, char* end)
{
//翻转字符串
	while (start < end)
	{
		*start ^= *end;
		*end ^= *start;
		*start ^= *end;
		start++;
		end--;
	}
}
char* ResverStr(char *str)
{
	char* end = str;
	char* start= end ;
	while (*end)
	{
		if (*end == ' ')   //以空格为节点，遇到空格将前一个字符串翻转
		{
			Reverse(start, end-1);
			end = end + 1;
			start = end;
		}
		end++;	
	}
	Reverse(start, end - 1); //由于遇到"\0" x循环结束，最后一个字符串要翻转
	Reverse(str, end - 1);//整体翻转
	return str;
}
int main()
{
	char str[] = "student a am i";
	//            tneduts a ma i
	//ResverStr(str);
	printf("%s\n",ResverStr(str));


	return 0;
}
```



