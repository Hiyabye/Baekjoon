#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve(void) {
  string s; cin >> s;
  long long m; cin >> m;

  int n = s.length();
  vector<long long> v(n, 0); v[n-1] = (s[n-1] != 'A');
  for (int i=n-2; i>=0; i--) {
    v[i] = v[i+1] + (s[i] != 'A');
  }

  long long ans = 0;
  for (int i=0; i<n; i++) {
    if (s[i] == 'A') ans += v[i];
  }
  cout << max(0LL, ans - m);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}