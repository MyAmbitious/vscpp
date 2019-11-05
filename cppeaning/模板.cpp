#include "../header/header.h"
//交换整型函数
// void swapInt(int& a, int& b) {
// 	int temp = a;
// 	a = b;
// 	b = temp;
// }

// //交换浮点型函数
// void swapDouble(double& a, double& b) {
// 	double temp = a;
// 	a = b;
// 	b = temp;
// }
// - 函数模板利用关键字 template
// - 使用函数模板有两种方式：自动类型推导、显示指定类型
// - 模板的目的是为了提高复用性，将类型参数化
//利用模板提供通用的交换函数
template<typename T>
void mySwap(T& a, T& b)
{
	T temp = *(&a);
	a = b;
	b = temp;
}

void test01()
{
	int a = 10;
	int b = 20;

	//swapInt(a, b);

	//利用模板实现交换
	//1、自动类型推导
	mySwap(a, b);

	//2、显示指定类型
	mySwap<int>(a, b);

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

}

int main() {

	test01();

	system("pause");

	return 0;
}