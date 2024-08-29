#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> a(n), b(n);
  for (int i=0; i<n; i++) cin >> a[i];
  for (int i=0; i<n; i++) cin >> b[i];

  int mx1 = 0, mx2 = 0;
  for (int i=0; i<n; i++) {
    if (a[i] > mx1) {
      mx2 = mx1;
      mx1 = a[i];
    } else if (a[i] > mx2) {
      mx2 = a[i];
    }
  }

  for (int i=0; i<n; i++) {
    cout << a[i] - (a[i] == mx1 ? mx2 : mx1) << " ";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}