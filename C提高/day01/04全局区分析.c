#include <stdio.h>
#include <stdlib.h>

char* get_str1()
{
	char *p = "abcde";//���ֳ�����
	return p;
}
char* get_str2()
{
	char *p = "abcde";//���ֳ�����
	return p;
}
int main()
{
	char *p = NULL;
	char *q = NULL;

	p = get_str1();
	//%s, ָ��ָ���ڴ����������
	//%d, ��ӡp�����ֵ
	printf("p = %s, p = %d\n", p, p);

	q = get_str2();
	printf("q = %s, q = %d\n", q, q);
	system("pause");
	return 0;
}