#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string a; getline(cin, a);
  string b; cin >> b;
  string c; cin >> c;
  int d; cin >> d;
  int e; cin >> e;
  int f; cin >> f;

  int ans = stoi(b.substr(0, b.find(':'))) * 60 + stoi(b.substr(b.find(':') + 1));
  if (c == "sat" || c == "sun") ans *= 2;
  if (d == 1) ans *= 2;
  if (e == 1) ans *= 3;
  if (f == 1) ans *= 3;

  cout << ans / 60 << ":" << setfill('0') << setw(2) << ans % 60;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}