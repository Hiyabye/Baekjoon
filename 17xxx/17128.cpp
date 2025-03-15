#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, q; cin >> n >> q;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];

  vector<int> b(n);
  for (int i=0; i<n; i++) {
    b[i] = a[i] * a[(i+1)%n] * a[(i+2)%n] * a[(i+3)%n];
  }

  int s = 0;
  for (int i=0; i<n; i++) s += b[i];

  while (q--) {
    int x; cin >> x; x--;
    for (int i=0; i<4; i++) {
      int j = (x+n-i)%n;
      s -= b[j];
      b[j] = -b[j];
      s += b[j];
    }
    cout << s << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}