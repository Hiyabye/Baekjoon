#include <iostream>
#include <string>
using namespace std;

int gcd(int a, int b) {
  return b ? gcd(b, a % b) : a;
}

int lcm(int a, int b) {
  return a * b / gcd(a, b);
}

void solve(void) {
  string s; cin >> s;
  string t; cin >> t;

  int n = lcm(s.length(), t.length());
  string ss = "", tt = "";
  for (int i=0; i<n/s.length(); i++) ss += s;
  for (int i=0; i<n/t.length(); i++) tt += t;

  cout << (ss == tt ? 1 : 0);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}