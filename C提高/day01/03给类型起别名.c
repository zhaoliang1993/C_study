#include <stdio.h>
#include <stdlib.h>

typedef unsigned int u32;

//typedef�ͽṹ����ʹ��

struct MyStruct
{
	int a;
	int b;
};
typedef struct MyStruct2
{
	int a;
	int b;
}TMP;

/*
void ,������
1.��������Ϊ�գ����庯��ʱ��������void����
2.����û�з���ֵ��void����
3.���ܶ���void���͵���ͨ������void a;//err,�޷�ȷ�����ͣ���ͬ���ͷ���ռ䲻һ��
4.���Զ���void *������ void *p;//ok��32λ��Զ4�ֽڣ�64λ��Զ8�ֽ�
5.�������ͱ��ʣ��̶��ڴ��С����
6.void *p����ָ�룬��������ֵ��
*/
int main()
{
	u32 t; //unsigned int

	//����ṹ�������һ��Ҫ����struct�ؼ���
	struct MyStruct m1;

	TMP m2;

	return 0;
}