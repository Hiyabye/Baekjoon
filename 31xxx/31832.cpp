#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool one(const string &s) {
  int cnt = 0;
  for (char c : s) {
    if (c >= 'A' && c <= 'Z') cnt++;
    if (c >= 'a' && c <= 'z') cnt--;
  }
  return cnt <= 0;
}

bool two(const string &s) {
  return s.length() <= 10;
}

bool three(const string &s) {
  for (char c : s) {
    if (c < '0' || c > '9') return true;
  }
  return false;
}

string solve(void) {
  int n; cin >> n;
  vector<string> s(n);
  for (int i=0; i<n; i++) cin >> s[i];

  for (int i=0; i<n; i++) {
    if (one(s[i]) && two(s[i]) && three(s[i])) return s[i];
  }
  return "";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << solve();
  return 0;
}