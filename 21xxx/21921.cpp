#include <iostream>
#include <map>
#include <vector>
using namespace std;

void solve(void) {
  int n, x; cin >> n >> x;
  vector<int> v(n);
  for (int i=0; i<n; i++) cin >> v[i];

  int cur = 0;
  for (int i=0; i<x; i++) {
    cur += v[i];
  }

  map<int, int> mp; mp[cur]++;
  for (int i=x; i<n; i++) {
    cur += v[i] - v[i-x];
    mp[cur]++;
  }

  if (mp.size() == 1 && mp.begin()->first == 0) {
    cout << "SAD";
  } else {
    cout << mp.rbegin()->first << "\n" << mp.rbegin()->second;
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}