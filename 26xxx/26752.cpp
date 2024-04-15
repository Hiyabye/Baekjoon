#include <iostream>
using namespace std;

void solve(void) {
  int h, m, s; cin >> h >> m >> s;

  s++;
  if (s == 60) s = 0, m++;
  if (m == 60) m = 0, h++;
  if (h == 24) h = 0;

  cout << (h < 10 ? "0" : "") << h << ":"
       << (m < 10 ? "0" : "") << m << ":"
       << (s < 10 ? "0" : "") << s;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}