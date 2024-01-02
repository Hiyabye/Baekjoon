#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s; cin >> s;

  for (int i=0; i<s.length(); i++) {
    bool flag = true;
    for (int j=0; j<9; j++) {
      if (s[i] == "CAMBRIDGE"[j]) {
        flag = false;
        break;
      }
    }
    if (flag) cout << s[i];
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}