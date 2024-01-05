#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void solve(void) {
  string a; cin >> a;
  string b; cin >> b;

  int h = stoi(b.substr(0, 2)) - stoi(a.substr(0, 2));
  int m = stoi(b.substr(3, 2)) - stoi(a.substr(3, 2));
  int s = stoi(b.substr(6, 2)) - stoi(a.substr(6, 2));

  if (s < 0) s += 60, m--;
  if (m < 0) m += 60, h--;
  if (h < 0) h += 24;
  if (h == 0 && m == 0 && s == 0) h += 24;

  cout << setw(2) << setfill('0') << h << ":";
  cout << setw(2) << setfill('0') << m << ":";
  cout << setw(2) << setfill('0') << s;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}