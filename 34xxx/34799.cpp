#include <iostream>
#include <string>
using namespace std;

inline int calc(const string &s) {
  int ret = 0;
  for (char c : s) ret += (c == 'r');
  return ret;
}

void solve(void) {
  string s; cin >> s;
  long long n; cin >> n;

  long long ans = 0;
  for (int i=0; i<26; i++) {
    ans += (n - i + 25) / 26 * calc(s);
    for (char &c : s) {
      c = (c - 'a' + 25) % 26 + 'a';
    }
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}