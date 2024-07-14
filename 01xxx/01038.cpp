#include <iostream>
#include <string>
using namespace std;

inline int c2i(char c) { return c - '0'; }
inline char i2c(int i) { return i + '0'; }

int calc(const string &s) {
  for (int i=s.length()-1; i>=0; i--) {
    if (c2i(s[i-1]) > c2i(s[i]) + 1) return i;
  }
  return -1;
}

string gen(int n) {
  string ret = "";
  for (int i=0; i<n; i++) ret += i2c(n-i-1);
  return ret;
}

string backtrack(int n, string cur) {
  if (n == 0) return cur;

  int idx = calc(cur), len = cur.length();
  if (idx != -1) {
    cur = cur.substr(0, idx) + i2c(c2i(cur[idx])+1) + gen(len-idx-1);
  } else if (cur[0] != '9') {
    cur = i2c(c2i(cur[0])+1) + gen(len-1);
  } else {
    cur = i2c(len) + gen(len);
  }
  return backtrack(n-1, cur);
}

void solve(void) {
  int n; cin >> n;

  cout << (n > 1022 ? "-1" : backtrack(n, "0"));
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}