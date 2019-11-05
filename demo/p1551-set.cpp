#include <iostream>
#include <iterator>
#include <set>
using namespace std;
int main(int argc, const char **argv) {
    int k = 0, sub1, sub2, sub3;
    set<int> s;
    cin >> k;
    for (int i = 10000; i < 30001; i++)
    {
        sub1 = i / 100;
        sub2 = i / 10 % 1000;
        sub3 = i % 1000;
        if (sub1 % k == 0 && sub2 % k == 0 && sub3 % k == 0)
        {
            s.insert(i);
        }
  }

  if (!s.size()) {
    cout << "No";
  } else {
    //   for (auto it = s.begin(); it != s.end(); it++) {
    //     cout << *it << "\n";
    //   }
    set<int>::iterator iter = s.begin();
    while (iter != s.end()) {
      cout << *iter << "\n";
      iter++;
    }
  }
  // int a = 20207;
  // int sub1 = a / 100;
  // int sub2 = a / 10 % 1000;
  // int sub3 = a % 1000;
  // cout << sub1 << " " << sub2 << " " << sub3;
  return 0;
}