#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve(void) {
  int n;
  cin >> n;
  vector<int> a(n*n);
  for (int i=0; i<n; i++) {
    for (int j=0; j<n; j++) {
      cin >> a[i*n+j];
    }
  }

  sort(a.begin(), a.end(), greater<int>());
  cout << a[n-1];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}