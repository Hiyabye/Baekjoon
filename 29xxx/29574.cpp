#include <algorithm>
#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

void solve(void) {
  unordered_map<int, string> mp;
  for (int i=0; i<=9; i++) {
    string s; cin >> s;
    mp[i] = s;
  }

  int n; cin >> n;
  while (n--) {
    int a; cin >> a;
    string ans = mp[a % 10];
    while (a) {
      ans = max(ans, mp[a % 10]);
      a /= 10;
    }
    cout << ans << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}