// - 实现四则运算
// - 其中negate是一元运算，其他都是二元运算
// **仿函数原型：**

// - `template<class T> T plus<T>`                //加法仿函数
// - `template<class T> T minus<T>`              //减法仿函数
// - `template<class T> T multiplies<T>`    //乘法仿函数
// - `template<class T> T divides<T>`         //除法仿函数
// - `template<class T> T modulus<T>`         //取模仿函数
// - `template<class T> T negate<T>`           //取反仿函数


#include <functional>
#include "../header/header.h"
//negate
void test01()
{
	negate<int> n;
	cout << n(50) << endl;
}

//plus
void test02()
{
	plus<int> p;
	cout << p(10, 20) << endl;
}

int main() {

	test01();
	test02();

	system("pause");

	return 0;
}