#include "../header/header.h"
//发现是引用，转换为 int* const ref = &a;
void func(int& ref){
	ref = 100; // ref是引用，转换为*ref = 100
}
int main(){
	int a = 10;

    //自动转换为 int* const ref = &a; 指针常量是指针指向不可改，也说明为什么引用不可更改
    // //const修饰的是常量，指针指向不可以改，指针指向的值可以更改
	int& ref = a;
	ref = 20; //内部发现ref是引用，自动帮我们转换为: *ref = 20;

	cout << "a:" << a << endl;
	cout << "ref:" << ref << endl;

	func(a);
    cout << "a:" << a << endl;
	return 0;
    // 结论：C++推荐用引用技术，因为语法方便，引用本质是指针常量，但是所有的指针操作编译器都帮我们做了
}