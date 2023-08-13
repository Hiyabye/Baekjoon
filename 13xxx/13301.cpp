#include <bits/stdc++.h>
using namespace std;

void solve(void) {
  int n;
  cin >> n;

  vector<long long> a(n+1);
  a[0] = a[1] = 1;
  for (int i=2; i<=n; i++) {
    a[i] = a[i-1] + a[i-2];
  }
  cout << a[n] * 2 + a[n-1] * 2;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}