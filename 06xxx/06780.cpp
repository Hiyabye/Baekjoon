#include <iostream>
using namespace std;

void solve(void) {
  int t1; cin >> t1;
  int t2; cin >> t2;

  int cnt = 2;
  while (t1 >= t2) {
    int tmp = t1;
    t1 = t2;
    t2 = tmp - t2;
    cnt++;
  }
  cout << cnt;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}