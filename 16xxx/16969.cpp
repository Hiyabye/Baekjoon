#include <iostream>
#include <string>
#define MOD 1000000009
using namespace std;

inline int calc(char a, char b) {
  return (b == 'c' ? 26 : 10) - (a == b);
}

void solve(void) {
  string s; cin >> s;

  long long ans = calc('a', s[0]);
  for (int i=1; i<s.length(); i++) {
    ans = (ans * calc(s[i-1], s[i])) % MOD;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}