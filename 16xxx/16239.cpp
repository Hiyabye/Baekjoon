#include <iostream>
using namespace std;

void solve(void) {
  int k; cin >> k;
  int n; cin >> n;

  for (int i=1; i<n; i++) {
    cout << i << "\n";
  }
  cout << k - (n-1)*n/2;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}