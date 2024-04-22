#include <iostream>
#include <string>
using namespace std;

int calc(int n) {
  int ret = 0;
  while (n) n /= 10, ret++;
  return ret;
}

int solve(void) {
  int n; cin >> n;
  int sz = calc(n);

  string s = "";
  for (int i=1; i<=n; i++) s += to_string(i);
  for (int i=0; i<s.length(); i++) {
    if (stoi(s.substr(i, sz)) == n) return i+1;
  }
  return 0;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << solve();
  return 0;
}