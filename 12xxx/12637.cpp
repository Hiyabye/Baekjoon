#include <algorithm>
#include <cctype>
#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

inline int c2i(char c) {
  return isdigit(c) ? c - '0' : c - 'a' + 10;
}

inline char i2c(int i) {
  return i < 10 ? i + '0' : i - 10 + 'a';
}

inline long long calc(const string &s, int b) {
  long long ret = 0;
  for (char c : s) {
    ret = ret * b + c2i(c);
  }
  return ret;
}

void solve(int idx) {
  string s; cin >> s;

  int cur = 0;
  unordered_map<char, int> mp;
  mp[s[0]] = 1;

  for (char &c : s) {
    if (mp.find(c) == mp.end()) mp[c] = cur++;
    if (cur == 1) cur++;
    c = i2c(mp[c]);
  }
  cur = max(cur, 2);

  long long ans = 0;
  for (char c : s) {
    ans = ans * cur + c2i(c);
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