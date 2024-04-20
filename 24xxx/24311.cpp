#include <iostream>
using namespace std;

void solve(void) {
  int t1, t2; cin >> t1 >> t2;
  int t3; cin >> t3;
  int t4, t5; cin >> t4 >> t5;
  int br; cin >> br;
  int t6; cin >> t6;

  int ans = (t1 - t4) * 60 + t2 - 10 - t3 - t5 - (br + 1) * t6;
  cout << (ans / 60 < 10 ? "0" : "") << ans / 60 << " " << (ans % 60 < 10 ? "0" : "") << ans % 60;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}