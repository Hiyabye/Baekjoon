#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, k; cin >> n >> k;

  vector<int> v(n*n+1, 1);
  for (int i=2; i<=n*n; i++) {
    for (int j=i; j<=n*n; j+=i) {
      v[j]++;
    }
  }

  for (int i=0; i<n; i++) {
    for (int j=0; j<n; j++) {
      cout << (v[i*n+j+1] <= k ? "*" : ".");
    }
    cout << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}