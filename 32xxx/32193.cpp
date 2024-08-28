#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> a(n), b(n);
  for (int i=0; i<n; i++) cin >> a[i] >> b[i];

  for (int i=1; i<n; i++) {
    a[i] += a[i-1];
    b[i] += b[i-1];
  }

  cout << a[0] - b[0] << "\n";
  for (int i=1; i<n; i++) {
    cout << a[i] - b[i] << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}