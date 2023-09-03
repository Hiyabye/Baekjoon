#include <bits/stdc++.h>
using namespace std;

bool solve(void) {
  int n; cin >> n;
  if (n == 0) return false;

  vector<pair<int, int> > a(n);
  for (int i=0; i<n; i++) {
    cin >> a[i].first;
    a[i].first = abs(a[i].first - 2023);
    a[i].second = i+1;
  }

  sort(a.begin(), a.end());
  cout << a[0].second << "\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  while (solve());
  return 0;
}