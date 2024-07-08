#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, k; cin >> n >> k;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];

  for (int i=1; i<n; i++) {
    int loc = i-1, newItem = a[i];
    while (0 <= loc && newItem < a[loc]) {
      a[loc+1] = a[loc]; loc--;
      if (--k == 0) {
        for (int i=0; i<n; i++) {
          cout << a[i] << " ";
        }
        return;
      }
    }
    if (loc+1 != i) {
      a[loc+1] = newItem;
      if (--k == 0) {
        for (int i=0; i<n; i++) {
          cout << a[i] << " ";
        }
        return;
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