#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];

  for (int i=0; i<n-1; i++) {
    for (int j=0; j<n-i-1; j++) {
      a[j] = abs(a[j] - a[j+1]);
    }
  }
  cout << a[0];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}