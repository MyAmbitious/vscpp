#include <bits/stdc++.h>
using namespace std;
bool a[240 + 5][240 + 5];
void ex(int x, int y, int s, int t) {
  for (int i = x; i <= s; i++) {
    {
      for (int j = y; j <= t; j++)
        a[i][j] = 1;
    }
  }
}
int main(int argc, const char **argv) {
  int m, n, c;
  int x, y, s, t, count = 0;
  memset(a, 0, sizeof(a));
  cin >> m >> n >> c;
  for (int i = 0; i < c; i++) {
    cin >> x >> y >> s >> t;
    ex(x, y, s, t);
  }
  for (int i = 1; i <= m; i++) {
    for (int j = 1; j <= n; j++) {
      if (a[i][j])
        count++;
    }
  }
  cout << count;
  return 0;
}