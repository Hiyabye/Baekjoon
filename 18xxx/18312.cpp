#include <iostream>
#include <string>
using namespace std;

void next(string &s) {
  s[5]++;
  if (s[5] == '9' + 1) s[5] = '0', s[4]++;
  if (s[4] == '5' + 1) s[4] = '0', s[3]++;
  if (s[3] == '9' + 1) s[3] = '0', s[2]++;
  if (s[2] == '5' + 1) s[2] = '0', s[1]++;
  if (s[1] == '9' + 1) s[1] = '0', s[0]++;
}

void solve(void) {
  int n, k; cin >> n >> k;

  int ans = 0;
  string cur = "000000", end = (n < 10 ? "0" : "") + to_string(n) + "5959";
  while (cur <= end) {
    if (cur.find(to_string(k)) != string::npos) ans++;
    next(cur);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}