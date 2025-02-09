#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  for (int i=1, j=n-1; i<=j; i++, j--) {
    cout << i << " ";
    if (i != j) cout << j << " ";
  }
  cout << n;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}