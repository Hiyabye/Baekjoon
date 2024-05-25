#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> a(n), b(n);
  for (int i=0; i<n; i++) cin >> a[i];
  for (int i=0; i<n; i++) cin >> b[i];

  int c = 0, d = 0;
  for (int i=0; i<n; i++) {
    c += a[i];
    d += a[i] * (1 - b[i]);
  }
  cout << c << "\n" << d;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}