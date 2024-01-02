#include <iostream>
using namespace std;

void solve(void) {
  int n;
  cin >> n;
  cout << (n+1)*(n+1)/4 << "\n";
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