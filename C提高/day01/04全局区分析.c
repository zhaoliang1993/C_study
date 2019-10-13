#include <stdio.h>
#include <stdlib.h>

char* get_str1()
{
	char *p = "abcde";//文字常量区
	return p;
}
char* get_str2()
{
	char *p = "abcde";//文字常量区
	return p;
}
int main()
{
	char *p = NULL;
	char *q = NULL;

	p = get_str1();
	//%s, 指针指向内存区域的内容
	//%d, 打印p本身的值
	printf("p = %s, p = %d\n", p, p);

	q = get_str2();
	printf("q = %s, q = %d\n", q, q);
	system("pause");
	return 0;
}