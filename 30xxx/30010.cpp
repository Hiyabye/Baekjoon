#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  for (int i=n; i>=1; i--) {
    cout << i << " ";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}