#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> x(n), l(n);
  for (int i=0; i<n; i++) cin >> x[i];
  for (int i=0; i<n; i++) cin >> l[i];
  vector<char> c(n);
  for (int i=0; i<n; i++) cin >> c[i];

  for (int i=0; i<n-1; i++) {
    for (int j=i+1; j<n; j++) {
      if (abs(x[i]-x[j]) > l[i]+l[j] || c[i] == c[j]) continue;
      cout << "YES\n" << i+1 << " " << j+1;
      return;
    }
  }
  cout << "NO";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}