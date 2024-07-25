#include <cmath>
#include <iostream>
#include <string>
using namespace std;

inline int calc(const string &s, const string &t) {
  return (s == "AD" || s == "BC") ? stoi(t) : stoi(s);
}

void solve(void) {
  string a, b; cin >> a >> b;
  string c, d; cin >> c >> d;

  if ((a == "AD" || b == "AD") ^ (c == "AD" || d == "AD")) {
    cout << calc(a, b) + calc(c, d) - 1;
  } else {
    cout << abs(calc(a, b) - calc(c, d));
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}