#include <iostream>
#include <string>
using namespace std;

inline int c2i(char c) {
  return c - '0';
}

inline char i2c(int i) {
  return i + '0';
}

void solve(void) {
  string a; cin >> a;
  string b; cin >> b;

  string ans = "";
  for (int i=0; i<8; i++) ans += a[i], ans += b[i];
  while (ans.length() > 2) {
    for (int i=0; i<ans.length()-1; i++) {
      ans[i] = i2c((c2i(ans[i]) + c2i(ans[i+1])) % 10);
    }
    ans.pop_back();
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}