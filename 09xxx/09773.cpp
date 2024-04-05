#include <iostream>
#include <string>
using namespace std;

int sum(const string &s) {
  int ret = 0;
  for (char c : s) ret += c - '0';
  return ret;
}

string format(int n) {
  string ret = to_string(n);
  while (ret.size() < 4) ret = "0" + ret;
  return ret;
}

void solve(void) {
  string s; cin >> s;

  int ans = sum(s) + stoi(s.substr(s.size()-3)) * 10;
  if (ans < 1000) ans += 1000;
  cout << format(ans % 10000) << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  while (n--) solve();
  return 0;
}