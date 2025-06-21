#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  if (n & 1) {
    for (int i=1; i<=n; i+=2) cout << i << " ";
    for (int i=n-1; i>=2; i-=2) cout << i << " ";
  } else {
    for (int i=1; i<=n; i+=2) cout << i << " ";
    for (int i=n; i>=2; i-=2) cout << i << " ";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}