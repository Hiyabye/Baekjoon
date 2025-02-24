#include <iostream>
#include <map>
#include <string>
using namespace std;

void solve(void) {
  int n; cin >> n;
  map<string, int> mp;
  while (n--) {
    string s; int k; cin >> s >> k;
    mp[s] += k;
  }

  for (auto [s, k] : mp) {
    cout << s << " " << k << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}