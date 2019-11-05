#include <cstdio>
#include <iostream>
using namespace std;
int main(int argc, const char **argv) {
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  if (d < b) {
    d += 60;
    c -= 1;
  }
  cout << c - a << " " << d - b;
  return 0;
}