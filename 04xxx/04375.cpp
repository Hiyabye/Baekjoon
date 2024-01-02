#include <iostream>
using namespace std;

void solve(void) {
  int n;

  while (cin >> n) {
    int ans = 1, r = 1;
    while (r % n) {
      r = (r*10+1) % n;
      ans++;
    }
    cout << ans << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}