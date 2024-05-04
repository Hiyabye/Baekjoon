#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  for (int i=0; i<n/2; i++) {
    cout << "1 2 ";
  }
  if (n & 1) cout << "3";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}