#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s;
  cin >> s;

  int ans = 0, sign = 1, num = 0;
  for (int i=0; i<s.size(); i++) {
    if (s[i] == '+') {
      ans += sign * num;
      num = 0;
    } else if (s[i] == '-') {
      ans += sign * num;
      num = 0;
      sign = -1;
    } else {
      num = num * 10 + (s[i] - '0');
    }
  }
  ans += sign * num;
  cout << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}