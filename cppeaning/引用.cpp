#include "../header/header.h"
int main() {
  // **作用： **给变量起别名

  // **语法：** `数据类型 &别名 = 原名`
  int a = 10;
  int &b = a;

  cout << "a = " << a << endl;
  cout << "b = " << b << endl;

  b = 100;

  cout << "a = " << a << endl;
  cout << "b = " << b << endl;

  int b1 = 20;
  // int &c; //错误，引用必须初始化
  int &c = a; //一旦初始化后，就不可以更改
  c = b1;      //这是赋值操作，不是更改引用

  cout << "a = " << a << endl;
  cout << "b1 = " << b1 << endl;
  cout << "c = " << c << endl;

  system("pause");

  return 0;
}