#include <iostream>
using namespace std;

int sqrt(int n) {
  int ret = 1;
  while (ret * ret < n) ret++;
  return ret;
}

void solve(void) {
  int n; cin >> n;

  cout << sqrt(n) << " " << (n+sqrt(n)-1)/sqrt(n);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}