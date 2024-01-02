#include <iostream>
using namespace std;

void solve(void) {
  int n, idx = 0;
  cin >> n;

  while (n) {
    if (n % 2) cout << idx << " ";
    n /= 2;
    idx++;
  }
  cout << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}