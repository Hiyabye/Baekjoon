#include <iostream>
#include <map>
using namespace std;

void solve(void) {
  int n; cin >> n;

  map<char, int> mp;
  while (n--) {
    char c; string s; cin >> c >> s;
    mp[c] += (s[0] == '+' ? 1 : -1) * stoi(s.substr(1));
  }

  for (auto [k, v] : mp) {
    cout << k << " " << v << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}