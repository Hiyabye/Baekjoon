#include <iostream>
using namespace std;

void solve(void) {
  int t, f, s, p, c; cin >> t >> f >> s >> p >> c;
  cout << 6*t + 3*f + 2*s + p + 2*c;
  cin >> t >> f >> s >> p >> c;
  cout << " " << 6*t + 3*f + 2*s + p + 2*c;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}