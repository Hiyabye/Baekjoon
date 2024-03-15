#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  long long ans = 0;

  string s;
  while (cin >> s) {
    ans += stoll(s.substr(0, s.length()-3)) * 100 + stoll(s.substr(s.length()-2, 2));
  }
  cout << ans / 100 << "." << (ans % 100 < 10 ? "0" : "") << ans % 100;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}