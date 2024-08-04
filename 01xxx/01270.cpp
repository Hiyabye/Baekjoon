#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

void solve(void) {
  int t; cin >> t;
  unordered_map<long long, int> mp;
  for (int i=0; i<t; i++) {
    long long n; cin >> n;
    mp[n]++;
  }

  long long ans = mp.begin()->first;
  for (auto [k, v] : mp) {
    if (v > mp[ans]) {
      ans = k;
    }
  }
  cout << (mp[ans] > t / 2 ? to_string(ans) : "SYJKGW") << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  while (n--) solve();
  return 0;
}