#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

string calc(string a, string b) {
  sort(a.begin(), a.end(), greater<char>());
  sort(b.begin(), b.end());
  return to_string(stoi(a) - stoi(b));
}

void solve(void) {
  string s; cin >> s;

  int ans = 0;
  while (s != "6174") {
    s = calc(s, s);
    while (s.size() < 4) s += '0';
    ans++;
  }
  cout << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}