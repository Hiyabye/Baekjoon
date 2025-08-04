#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

inline bool calc(int &n) {
  string s = to_string(n);
  if (s.find('1') == string::npos) return false;
  s.erase(s.find_first_of('1'), 1);
  while (s.front() == '0') s.erase(s.begin());
  if (!s.empty()) n = stoi(s);
  else n = 0;
  return true;
}

void solve(void) {
  int n; cin >> n;

  int ans = 0;
  while (n) {
    if (!calc(n)) n--;
    ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}