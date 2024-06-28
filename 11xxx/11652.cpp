#include <iostream>
#include <utility>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(pair<long long, int> &a, pair<long long, int> &b) {
  if (a.second == b.second) return a.first < b.first;
  return a.second > b.second;
}

void solve(void) {
  int n;
  long long x;
  cin >> n;

  map<long long, int> mp;
  for (int i=0; i<n; i++) {
    cin >> x;
    if (mp.find(x) == mp.end()) mp[x] = 1;
    else mp[x]++;
  }

  vector<pair<long long, int> > v(mp.begin(), mp.end());
  sort(v.begin(), v.end(), cmp);
  cout << v[0].first;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}