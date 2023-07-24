#include <bits/stdc++.h>

using namespace std;

int n;
vector<int> a, b, c;

int backtrack(int idx) {
  if (idx == n) {
    int sum = 0;
    for (int i=0; i<n-1; i++) {
      sum += abs(a[b[i]] - a[b[i+1]]);
    }
    return sum;
  }

  int ret = 0;
  for (int i=0; i<n; i++) {
    if (c[i]) continue;
    c[i] = 1;
    b[idx] = i;
    ret = max(ret, backtrack(idx+1));
    c[i] = 0;
  }
  return ret;
}

void solve(void) {
  cin >> n;
  a.resize(n);
  b.resize(n);
  c.resize(n, 0);
  for (int i=0; i<n; i++) {
    cin >> a[i];
  }

  cout << backtrack(0);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}