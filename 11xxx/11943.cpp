#include <bits/stdc++.h>
using namespace std;

void solve(void) {
  int a, b, c, d;
  cin >> a >> b;
  cin >> c >> d;
  cout << min(a+d, b+c);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}