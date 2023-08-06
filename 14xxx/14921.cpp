#include <bits/stdc++.h>
using namespace std;

void solve(void) {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];

  sort(a.begin(), a.end());

  int lo = 0, hi = n-1, ans = 2e9;
  pair<int, int> p = make_pair(a[0], a[n-1]);
  while (lo < hi) {
    if (abs(a[lo]+a[hi]) < ans) {
      ans = abs(a[lo]+a[hi]);
      p = make_pair(a[lo], a[hi]);
    }
    if (a[lo]+a[hi] < 0) lo++;
    else hi--;
  }

  cout << p.first + p.second;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}