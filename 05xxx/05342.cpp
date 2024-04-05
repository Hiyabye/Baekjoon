#include <iostream>
#include <map>
#include <string>
using namespace std;

void solve(void) {
  map<string, double> m = {
    {"Paper", 57.99},
    {"Printer", 120.50},
    {"Planners", 31.25},
    {"Binders", 22.50},
    {"Calendar", 10.95},
    {"Notebooks", 11.20},
    {"Ink", 66.95}
  };

  double ans = 0;
  string s; cin >> s;
  while (s != "EOI") {
    ans += m[s];
    cin >> s;
  }
  cout << "$" << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}