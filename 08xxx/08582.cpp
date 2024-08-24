#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> w(n);
  for (int i=0; i<n; i++) cin >> w[i];

  vector<int> a(n, w[0]);
  for (int i=1; i<n; i++) {
    a[i] = max(a[i-1], w[i]);
  }

  vector<int> b(n, w[n-1]);
  for (int i=n-2; i>=0; i--) {
    b[i] = max(b[i+1], w[i]);
  }

  for (int i=0; i<n; i++) {
    cout << a[i] << " " << b[i] << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}