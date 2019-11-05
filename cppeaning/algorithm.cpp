#include <algorithm>
#include <iostream>
#include <iterator>
#include <string.h>
#include <type_traits>
using namespace std;
int main() {
  string s1 = "aaa";
  string s2 = "bbb";
  string s3 = "ccc";
  string s = min(s1, s2);
  cout << s << endl;
  cout << max(s3, s2) << endl;
  swap(s2, s3);
  int a[] = {5, 1, 2, 6, 9, 7, 6, 8, 4, 3};
  sort(a, a + 9);
  //   Iterator<int> it ;
  unique(a, a + 9);
  cout << *a;
  cout << binary_search(a, a + 9, 4) << endl;
  lower_bound(a, a + 9, 3);
  cout << upper_bound(a, a + 9, 2);
}