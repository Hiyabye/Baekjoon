#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];
  sort(a.begin(), a.end());

  map<int, int> mp;
  for (int i=1; i<n; i++) {
    mp[a[i]-a[i-1]]++;
  }
  cout << mp.begin()->first << " " << mp.begin()->second;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}