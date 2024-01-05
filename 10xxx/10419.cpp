#include <iostream>
using namespace std;

void solve(void) {
  int d; cin >> d;

  int t = 0;
  while (t*t+t <= d) t++;
  cout << t-1 << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}