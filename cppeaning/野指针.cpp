#include "../header/header.h"
int main(int argc, const char** argv) {
    //指针变量p指向内存地址编号为0x1100的空间
	int * p = (int *)0x1100;

	//访问野指针报错 什么也打印不出来
	cout << *p << endl;
    cout << "-------" << endl;

    system("pause");

	return 0;

}