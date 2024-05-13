#include <iostream>
#include <vector>
using namespace std;

bool good(int n, const vector<int> &a) {
  for (int i=1; i<n; i++) {
    if (a[i] <= a[i-1]) return false;
  }
  return true;
}

void solve(void) {
  int n; cin >> n;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];

  if (good(n, a)) cout << 0;
  else {
    cout << n << "\n";
    for (int i=1; i<=n; i++) cout << i << " ";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}