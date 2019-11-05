#include "../header/header.h"
int main() {

  int a = 10;

  int *p;
  p = &a; //指针指向数据a的地址

  cout << *p << endl; //* 解引用
  cout << sizeof(p) << endl;
  cout << sizeof(char *) << "字节" << endl;
  cout << sizeof(float *) << endl;
  cout << sizeof(double *) << endl;

  system("pause");

  return 0;
  //     指针变量和普通变量的区别

  // - 普通变量存放的是数据,指针变量存放的是地址
  // - 指针变量可以通过" *
  // "操作符，操作指针变量指向的内存空间，这个过程称为解引用

  // > 总结1： 我们可以通过 & 符号 获取变量的地址

  // > 总结2：利用指针可以记录地址

  // > 总结3：对指针变量解引用，可以操作指针指向的内存
}