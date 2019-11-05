#include <cstring>
#include <iostream>
using namespace std;
int a[30000 + 1];
int main(int argc, const char **argv) {
  int k = 0, sub1, sub2, sub3, count = 0;
  memset(a, 0, sizeof(a));
  cin >> k;
  for (int i = 10000; i < 30001; i++) {
    sub1 = i / 100;
    sub2 = i / 10 % 1000;
    sub3 = i % 1000;
    if (sub1 % k == 0 && sub2 % k == 0 && sub3 % k == 0) {
      a[i] = i;
    }
  }
    for (int i = 10000; i < 30001; i++) {
      if (a[i]) {
        count++;
        cout << a[i] << "\n";
      }
    }
    if (!count) {
      cout << "No";
    }
  return 0;
}