#include "../header/header.h"
int main() {
  // **���ã� **�����������

  // **�﷨��** `�������� &���� = ԭ��`
  int a = 10;
  int &b = a;

  cout << "a = " << a << endl;
  cout << "b = " << b << endl;

  b = 100;

  cout << "a = " << a << endl;
  cout << "b = " << b << endl;

  int b1 = 20;
  // int &c; //�������ñ����ʼ��
  int &c = a; //һ����ʼ���󣬾Ͳ����Ը���
  c = b1;      //���Ǹ�ֵ���������Ǹ�������

  cout << "a = " << a << endl;
  cout << "b1 = " << b1 << endl;
  cout << "c = " << c << endl;

  system("pause");

  return 0;
}