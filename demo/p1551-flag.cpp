#include <iostream>
using namespace std;
int main(int argc, const char **argv) {
  int k = 0, sub1, sub2, sub3, flag = 0;
  cin >> k;
  for (int i = 10000; i < 30001; i++) {
    sub1 = i / 100;
    sub2 = i / 10 % 1000;
    sub3 = i % 1000;
    if (sub1 % k == 0 && sub2 % k == 0 && sub3 % k == 0) {
      cout << i << "\n";
      flag++;
    }
  }
  if(!flag)
      cout << "No";
  return 0;
}