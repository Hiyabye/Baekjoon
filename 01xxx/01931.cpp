#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(pair<int, int> &a, pair<int, int> &b) {
  if (a.second == b.second) return a.first < b.first;
  else return a.second < b.second;
}

void solve(void) {
  int n;
  cin >> n;
  vector<pair<int, int> > a(n);
  for (int i=0; i<n; i++) {
    cin >> a[i].first >> a[i].second;
  }

  sort(a.begin(), a.end(), cmp);

  int cur = a.front().second;
  int ans = 1;
  for (int i=1; i<n; i++) {
    if (cur <= a[i].first) {
      cur = a[i].second;
      ans++;
    }
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}