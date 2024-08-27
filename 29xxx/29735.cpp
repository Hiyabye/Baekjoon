#include <iostream>
#include <string>
using namespace std;

inline string calc(const string &s, int t) {
  int m = stoi(s.substr(0, 2)) * 60 + stoi(s.substr(3, 2)) + t;
  return (m / 60 < 10 ? "0" : "") + to_string(m / 60) + ":"
       + (m % 60 < 10 ? "0" : "") + to_string(m % 60);
}

void solve(void) {
  string a, b; cin >> a >> b;
  int n, t; cin >> n >> t;

  int c = 0; string d = a;
  for (int i=0; i<=n; i++) {
    d = calc(d, t);
    if (d >= b) c++, d = calc(a, t);
  }
  cout << c << "\n" << d;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}