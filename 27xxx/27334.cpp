#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
using namespace std;

bool cmp(pair<int, int> x, pair<int, int> y) {
  return x.second < y.second;
}

void solve(void) {
  int n; cin >> n;
  vector<pair<int, int>> a(n);
  for (int i=0; i<n; i++) cin >> a[i].first, a[i].second = i;
  sort(a.begin(), a.end());

  map<int, int> mp;
  for (int i=0; i<n; i++) {
    if (mp.find(a[i].first) != mp.end()) a[i].first = mp[a[i].first];
    else a[i].first = mp[a[i].first] = i+1;
  }
  sort(a.begin(), a.end(), cmp);

  for (int i=0; i<n; i++) {
    cout << a[i].first << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}