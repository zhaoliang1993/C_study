#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a;         //告诉编译器，分配4个字节
	int b[10];     //告诉编译器，分配4*10个字节

	/*
	类型的本质，固定内存块大小的别名
	可以通过sizeof()测试
	*/
	printf("sizeof(a)=%d,sizeof(b)=%d\n",sizeof(a),sizeof(b));
	//打印地址%p:16进制
	//数组名字，数组首元素地址，数组首地址
	printf("b:%d\n", b);
	printf("b[0]:%d\n", &b[0]);
	printf("b[1]:%d\n", &b[1]);

	//b、&b数据类型不一样
	//b指首元素地址，一个元素4个字节， +1  ，  +4
	//&b指整个数组的首地址，一个数组4*10个字节，+1  ，  +40
	printf("b+1:%d, &b+1:%d\n", b + 1, &b + 1);

	
	system("pause");
	return 0;
}