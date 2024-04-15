#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> v(n);
  for (int i=0; i<n; i++) cin >> v[i];

  int a = 0, b = 0;
  for (int i=1; i<n; i++) {
    if (v[i] < v[i-1]) a += v[i-1] - v[i];
    else b += v[i] - v[i-1];
  }
  cout << a << " " << b;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}