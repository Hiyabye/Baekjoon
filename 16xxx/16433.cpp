#include <iostream>
using namespace std;

void solve(void) {
  int n, r, c; cin >> n >> r >> c;

  for (int i=0; i<n; i++) {
    for (int j=0; j<n; j++) {
      cout << ((i + j) % 2 == (r + c) % 2 ? 'v' : '.');
    }
    cout << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}