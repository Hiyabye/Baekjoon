#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void solve(void) {
  string s; cin >> s;
  int n; cin >> n;

  int y = stoi(s.substr(0, 4));
  int m = stoi(s.substr(5, 2));
  int d = stoi(s.substr(8, 2));

  d += n;
  m += (d-1) / 30;
  d = (d-1) % 30 + 1;
  y += (m-1) / 12;
  m = (m-1) % 12 + 1;

  cout << y << '-' << setw(2) << setfill('0') << m << '-' << setw(2) << setfill('0') << d;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}