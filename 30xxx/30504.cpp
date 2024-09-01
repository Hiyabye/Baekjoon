#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

bool cmp(const pair<int, int> &a, const pair<int, int> &b) {
  return a.second < b.second;
}

void solve(void) {
  int n; cin >> n;
  vector<pair<int, int>> a(n);
  for (int i=0; i<n; i++) cin >> a[i].first, a[i].second = i;
  sort(a.begin(), a.end());

  vector<int> b(n);
  for (int i=0; i<n; i++) cin >> b[i];
  sort(b.begin(), b.end());
  
  for (int i=0; i<n; i++) {
    if (b[i] < a[i].first) {
      cout << -1;
      return;
    }
    a[i].first = b[i];
  }
  sort(a.begin(), a.end(), cmp);

  for (int i=0; i<n; i++) {
    cout << a[i].first << " ";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}