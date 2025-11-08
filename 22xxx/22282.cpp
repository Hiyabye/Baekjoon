#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> v(n+2, 0);
  for (int i=0; i<n; i++) {
    int c; cin >> c;
    if (c > n) v[n]++;
    else v[c]++;
  }

  for (int i=n; i>=1; i--) {
    if (v[i] >= i) {
      cout << i;
      return;
    }
    v[i-1] += v[i];
  }
  cout << 0;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}