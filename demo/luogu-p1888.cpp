#include <algorithm>
#include <iostream>
#include <numeric>
using namespace std;
int main() {
  int a, b, c, min, max;
  cin >> a >> b >> c;
  max = a > b ? a : b;
  max = max > c ? max : c;
  min = a < b ? a : b;
  min = min < c ? min : c;
  int k = __gcd(max, min);//求最大公约数 需要引入algorithm头文件
  int k2 = lcm(max, min);//求最小公倍数 需要引入numeric头文件
  cout << min / k << "/" << max / k;
//   cout << min_element(a, b) << endl;
  cout << k2 << endl;
  return 0;
}