#include "../header/header.h"
int main() {
  //ָ�����pָ���ڴ��ַ���Ϊ0�Ŀռ�
  int *p = NULL;
  *p = 122;
  //���ʿ�ָ�뱨��
  //�ڴ���0 ~255Ϊϵͳռ���ڴ棬�������û�����
  cout << *p << endl;


  system("pause");

  return 0;
}