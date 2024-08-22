#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

unordered_map<char, int> mp = {
  {'H', 1}, {'C', 12}, {'N', 14}, {'O', 16}
};

void solve(void) {
  string s; cin >> s;

  int ans = 0, cnt = 0; char cur = ' ';
  for (char c : s) {
    if ('A' <= c && c <= 'Z') {
      ans += mp[cur] * (cnt == 0 ? 1 : cnt);
      cnt = 0;
      cur = c;
    } else {
      cnt = cnt * 10 + c - '0';
    }
  }
  ans += mp[cur] * (cnt == 0 ? 1 : cnt);

  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}