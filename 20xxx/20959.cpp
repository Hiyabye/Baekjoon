#include <iostream>
#include <set>
#include <string>
using namespace std;

bool digit(char c) {
  return c >= '0' && c <= '9';
}

int c2i(char c) {
  return c - '0';
}

void solve(void) {
  string s; cin >> s;

  set<int> ans;
  int num = digit(s[0]) ? c2i(s[0]) : 0;
  for (int i=1; i<s.length(); i++) {
    if (digit(s[i])) {
      num = 10 * num + c2i(s[i]);
    } else {
      ans.insert(num);
      num = 0;
    }
  }
  ans.insert(num);

  if (ans.find(0) != ans.end()) ans.erase(0);
  cout << ans.size();
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}