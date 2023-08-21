#include <bits/stdc++.h>
using namespace std;

int n;

bool check(string s) {
  int len = s.length();
  for (int i=1; i<=len/2; i++) {
    if (s.substr(len-i, i) == s.substr(len-2*i, i)) return false;
  }
  return true;
}

string backtrack(int idx, string s) {
  if (!check(s)) return "";
  if (idx == n) return s;

  string ret;
  for (int i=1; i<=3; i++) {
    ret = backtrack(idx+1, s+to_string(i));
    if (ret != "") return ret;
  }
  return "";
}

void solve(void) {
  cin >> n;
  cout << backtrack(0, "");
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}