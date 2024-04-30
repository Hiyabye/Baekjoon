#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, k; cin >> n >> k;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];

  for (int i=n-1; i>0; i--) {
    for (int j=0; j<i; j++) {
      if (a[j] > a[j+1]) {
        swap(a[j], a[j+1]);
        if (--k == 0) {
          cout << a[j] << " " << a[j+1];
          return;
        }
      }
    }
  }
  cout << -1;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}