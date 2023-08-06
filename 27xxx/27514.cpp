#include <bits/stdc++.h>
using namespace std;

bool process(int n, vector<long long> &a) {
  bool change = false;

  for (int i=0; i<n-1; i++) {
    if (a[i] == 0) continue;
    if (a[i] != a[i+1]) continue;
    a[i+1] *= 2;
    a[i] = 0;
    change = true;
  }
  return change;
}

void solve(void) {
  int n;
  cin >> n;
  vector<long long> a(n);
  for (int i=0; i<n; i++) cin >> a[i];

  do {
    sort(a.begin(), a.end());
  } while (process(n, a));

  cout << a[n-1];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}