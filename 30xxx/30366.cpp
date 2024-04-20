#include <iostream>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;

  long long time = 0, cur = 0;
  while (n--) {
    long long a; cin >> a;
    if (cur + a > m) cur = 0, time++;
    cur += a;
    cout << time << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}