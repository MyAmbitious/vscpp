#include <cstdio>
#include <iostream>
using namespace std;
int main() {
  int a1, a2, n;
  cin >> a1 >> a2 >> n;

  int d = a2 - a1;
  cout << n * a1 + (n * d * (n - 1)) / 2;
  return 0;
}
