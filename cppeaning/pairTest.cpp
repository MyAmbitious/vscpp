// **功能描述：**
// - 成对出现的数据，利用对组可以返回两个数据

#include <string>
#include "../header/header.h"
//对组创建
void test01() {
  pair<string, int> p(string("Tom"), 20);
  cout << "姓名： " << p.first << " 年龄： " << p.second << endl;

  pair<string, int> p2 = make_pair("Jerry", 10);
  cout << "姓名： " << p2.first << " 年龄： " << p2.second << endl;
}

int main() {

  test01();

  system("pause");

  return 0;
}