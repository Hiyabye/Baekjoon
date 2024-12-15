#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];

  if (n == 1) {
    cout << 'A';
    return;
  }

  if (n == 2) {
    if (a[0] == a[1]) cout << a[0];
    else cout << 'A';
    return;
  }

  if (a[0] == a[1]) {
    for (int i=2; i<n; i++) {
      if (a[i] != a[0]) {
        cout << 'B';
        return;
      }
    }
    cout << a[0];
    return;
  }

  if ((a[2] - a[1]) % (a[1] - a[0])) {
    cout << 'B';
    return;
  }

  int p = (a[2] - a[1]) / (a[1] - a[0]);
  int q = a[1] - p * a[0];

  for (int i=2; i<n; i++) {
    if (a[i] != p * a[i-1] + q) {
      cout << 'B';
      return;
    }
  }
  cout << p * a[n-1] + q;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}