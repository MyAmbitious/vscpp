#include "../header/header.h"
#include <algorithm>
#include <vector>

using namespace std;
void MyPrint(int val) { cout << val << endl; }

void test01() {

  //����vector�������󣬲���ͨ��ģ�����ָ�������д�ŵ����ݵ�����
  vector<int> v;
  //�������з�����
  v.push_back(10);
  v.push_back(20);
  v.push_back(30);
  v.push_back(40);
  

  //ÿһ�����������Լ��ĵ����������������������������е�Ԫ��
  // v.begin()���ص����������������ָ�������е�һ������
  // v.end()���ص����������������ָ������Ԫ�ص����һ��Ԫ�ص���һ��λ��
  // vector<int>::iterator �õ�vector<int>���������ĵ���������

  vector<int>::iterator pBegin = v.begin();
  vector<int>::iterator pEnd = v.end();

  //��һ�ֱ�����ʽ��
  while (pBegin != pEnd) {
    cout << *pBegin << endl;
    pBegin++;
  }
  cout << endl;

  //�ڶ��ֱ�����ʽ��
  for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
    cout << *it << endl;
  }
  cout << endl;

  //�����ֱ�����ʽ��
  //ʹ��STL�ṩ��׼�����㷨  ͷ�ļ� algorithm
  for_each(v.begin(), v.end(), MyPrint);
}

int main() {

  test01();

  system("pause");

  return 0;
}