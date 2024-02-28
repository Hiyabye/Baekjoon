#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string a; cin >> a;
  string b; cin >> b;

  int ah = stoi(a.substr(0, 2));
  int am = stoi(a.substr(3, 2));
  int at = 60 * ah + am;
  int bh = stoi(b.substr(0, 2));
  int bm = stoi(b.substr(3, 2));
  int bt = 60 * bh + bm;

  int ans = 1440 - at + bt;
  cout << setw(2) << setfill('0') << ans / 60 << ":" << setw(2) << ans % 60 << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}