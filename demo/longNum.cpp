#include <iostream>
using namespace std;
int a[10000 + 5];
int main(int argc, const char **argv) {
  int n,max;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0, m = 1; i < n; i++) {
    if(a[i]+1==a[i+1]){
        m++;
    }else if(m>max) {
      max = m, m = 1;

    }
  }
  cout << max;
  return 0;
}