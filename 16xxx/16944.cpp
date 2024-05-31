#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

bool one(const string &s) {
  for (char c : s) {
    if ('0' <= c && c <= '9') return false;
  }
  return true;
}

bool two(const string &s) {
  for (char c : s) {
    if ('a' <= c && c <= 'z') return false;
  }
  return true;
}

bool three(const string &s) {
  for (char c : s) {
    if ('A' <= c && c <= 'Z') return false;
  }
  return true;
}

bool four(const string &s) {
  for (char c : s) {
    if (string("!@#$%^&*()-+").find(c) != string::npos) return false;
  }
  return true;
}

void solve(void) {
  int n; cin >> n;
  string s; cin >> s;

  cout << max(6 - n, one(s) + two(s) + three(s) + four(s));
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}