#include <algorithm>
#include <cstring>
#include <iostream>

using namespace std;
bool cmp(int a, int b) { return a < b; }
int main() {
  int a[50] = {1, 3, 4, 2, 5, 55, 1, 3};

  sort(a, a + 5, cmp);
  unique(a, a + 8);
  for (int i = 0; i < 50; i++)
    cout << a[i] << ' ';
  return 0;
}