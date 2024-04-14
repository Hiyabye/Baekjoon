#include <iostream>
#include <string>
using namespace std;

void left(string &ans) {
  for (int i=0; i<=9; i++) {
    if (ans[i] == '1') continue;
    ans[i] = '1';
    return;
  }
}

void right(string &ans) {
  for (int i=9; i>=0; i--) {
    if (ans[i] == '1') continue;
    ans[i] = '1';
    return;
  }
}

void solve(void) {
  int n; cin >> n;
  string s; cin >> s;

  string ans = "0000000000";
  for (int i=0; i<n; i++) {
    switch (s[i]) {
      case 'L': left(ans); break;
      case 'R': right(ans); break;
      default: ans[s[i]-'0'] = '0'; break;
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