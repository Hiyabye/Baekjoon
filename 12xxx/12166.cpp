#include <iostream>
#include <string>
using namespace std;

inline int c2i(char c) { return c - '0'; }

void solve(int idx) {
  int n; string s; cin >> n >> s;

  int ans = 0, cnt = c2i(s[0]);
  for (int i=1; i<=n; i++) {
    if (i > cnt) {
      ans += i - cnt;
      cnt += i - cnt;
    }
    cnt += c2i(s[i]);
  }
  cout << "Case #" << idx << ": " << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  for (int i=1; i<=t; i++) solve(i);
  return 0;
}