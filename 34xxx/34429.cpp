#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  int h, m; char c; string s; cin >> h >> c >> m >> s;
  int t; cin >> t;

  int ans = (((s == "AM" ? 0 : 12) + (h == 12 ? 0 : h)) * 60 + m - t + 1440) % 1440;
  int a = ans / 60, b = ans % 60;
  string d = "AM";
  if (a >= 12) {
    d = "PM";
    if (a > 12) a -= 12;
  }
  if (a == 0) a = 12;

  cout << a << ":" << setfill('0') << setw(2) << b << " " << d;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}