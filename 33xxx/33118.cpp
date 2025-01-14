#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> a(3*n);
  for (int i=0; i<3*n; i++) cin >> a[i];
  sort(a.begin(), a.end());

  cout << a[n];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}