#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a;         //���߱�����������4���ֽ�
	int b[10];     //���߱�����������4*10���ֽ�

	/*
	���͵ı��ʣ��̶��ڴ���С�ı���
	����ͨ��sizeof()����
	*/
	printf("sizeof(a)=%d,sizeof(b)=%d\n",sizeof(a),sizeof(b));
	//��ӡ��ַ%p:16����
	//�������֣�������Ԫ�ص�ַ�������׵�ַ
	printf("b:%d\n", b);
	printf("b[0]:%d\n", &b[0]);
	printf("b[1]:%d\n", &b[1]);

	//b��&b�������Ͳ�һ��
	//bָ��Ԫ�ص�ַ��һ��Ԫ��4���ֽڣ� +1  ��  +4
	//&bָ����������׵�ַ��һ������4*10���ֽڣ�+1  ��  +40
	printf("b+1:%d, &b+1:%d\n", b + 1, &b + 1);

	
	system("pause");
	return 0;
}