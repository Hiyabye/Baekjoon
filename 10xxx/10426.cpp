#include <iostream>
#include <string>
using namespace std;

bool leap(int y) {
  return y % 400 == 0 || (y % 100 != 0 && y % 4 == 0);
}

void next(int &y, int &m, int &d) {
  if ((d == 28 && m == 2 && !leap(y)) || (d == 29 && m == 2)) d = 1, m = 3;
  else if ((d == 30 && (m == 4 || m == 6 || m == 9 || m == 11)) || d == 31) d = 1, m++;
  else d++;
  if (m == 13) m = 1, y++;
}

void solve(void) {
  string s; int n; cin >> s >> n;

  int y = stoi(s.substr(0, 4));
  int m = stoi(s.substr(5, 2));
  int d = stoi(s.substr(8, 2));
  
  while (--n) next(y, m, d);
  cout << y << "-" << (m < 10 ? "0" : "") << m << "-" << (d < 10 ? "0" : "") << d;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}