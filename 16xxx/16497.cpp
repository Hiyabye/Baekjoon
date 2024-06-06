#include <iostream>
#include <unordered_map>
using namespace std;

bool solve(void) {
  int n; cin >> n;
  unordered_map<int, int> mp;
  while (n--) {
    int a, b; cin >> a >> b;
    for (int i=a; i<b; i++) mp[i]++;
  }
  int k; cin >> k;

  for (auto it=mp.begin(); it!=mp.end(); it++) {
    if (it->second > k) return false;
  }
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << solve();
  return 0;
}