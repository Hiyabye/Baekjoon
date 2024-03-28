#include <iostream>
#include <string>
using namespace std;

bool fifty(const string &s) {
  return s.find("50") != string::npos;
}

void solve(void) {
  int n; cin >> n;

  int ans = 0;
  while (n--) {
    ans += (fifty(to_string(n)) ? 2 : 1);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}