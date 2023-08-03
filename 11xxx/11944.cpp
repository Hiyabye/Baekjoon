#include <bits/stdc++.h>
using namespace std;

void solve(void) {
  int n, m;
  cin >> n >> m;

  string s;
  for (int i=0; i<n; i++) {
    s += to_string(n);
  }
  cout << s.substr(0, m);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}