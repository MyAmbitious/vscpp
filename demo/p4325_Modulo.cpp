#include <iostream>
#include <set>
using namespace std;
int main(int argc, const char **argv) {
  set<int> s;
  int x = 0;
  for (int i = 0; i < 10; i++) {
    cin >> x;
    s.insert(x % 42);
  }
  cout << s.size() << endl;
  return 0;
}