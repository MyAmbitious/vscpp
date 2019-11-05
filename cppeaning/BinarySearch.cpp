#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
void print01(int val) { cout << val << " "; }
class print02 {
public:
  void operator()(int val) { cout << val << " "; }
};
int main() {

  int a[100] = {4, 10, 11, 30, 69, 70, 96, 100, 20, -4, 6};

  vector<int> t(a, a + 11);
  sort(t.begin(), t.end());
  for_each(t.begin(), t.end(), print02());
  int b = binary_search(a, a + 9, 4); //���ҳɹ�������1
  cout << "�������в���Ԫ��4�����Ϊ��" << b << endl;
  int c = binary_search(a, a + 9, 40); //����ʧ�ܣ�����0
  cout << "�������в���Ԫ��40�����Ϊ��" << c << endl;
  int d = lower_bound(a, a + 9, 10) - a;
  cout << "�������в��ҵ�һ�����ڵ���10��Ԫ��λ�ã����Ϊ��" << d << endl;
  int e = lower_bound(a, a + 9, 101) - a;
  cout << "�������в��ҵ�һ�����ڵ���101��Ԫ��λ�ã����Ϊ��" << e << endl;
  int f = upper_bound(a, a + 9, 10) - a;
  cout << "�������в��ҵ�һ������10��Ԫ��λ�ã����Ϊ��" << f << endl;
  int g = upper_bound(a, a + 9, 101) - a;
  cout << "�������в��ҵ�һ������101��Ԫ��λ�ã����Ϊ��" << g << endl;
  cout << a[f] << endl;
}