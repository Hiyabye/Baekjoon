#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int b = 1e9, c = -1e9;
  vector<bool> v(101, false);
  for (int i=0; i<3; i++) {
    int x, y; cin >> x >> y;
    b = min(b, y-x); c = max(c, y-x);
    for (int j=x; j<y; j++) v[j] = true;
  }

  int a = 0;
  for (int i=0; i<=100; i++) {
    if (v[i] && !v[i+1]) a++;
  }
  cout << a << "\n" << b << " " << c;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}