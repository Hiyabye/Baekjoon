#include <iostream>
using namespace std;

void solve(void) {
  char c;
  int h1, m1, s1; cin >> h1 >> c >> m1 >> c >> s1;
  int h2, m2, s2; cin >> h2 >> c >> m2 >> c >> s2;

  cout << (3600*(h2-h1) + 60*(m2-m1) + (s2-s1) + 86400) % 86400;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}