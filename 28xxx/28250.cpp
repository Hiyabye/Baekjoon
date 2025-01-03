#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];

  long long z = count(a.begin(), a.end(), 0);
  long long o = count(a.begin(), a.end(), 1);

  cout << z*(z-1)/2 + z*o*2 + z*(n-z-o);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}