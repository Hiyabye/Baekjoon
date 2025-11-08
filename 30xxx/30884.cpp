#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s; cin >> s;

  string ans = "";
  for (char c : s) {
    if (c == ')') ans += "1)+";
    else ans += c;
  }
  ans.pop_back();

  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}