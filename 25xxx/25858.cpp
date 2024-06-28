#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

void solve(void) {
  int n, d; cin >> n >> d;
  vector<int> v(n);
  for (int i=0; i<n; i++) cin >> v[i];

  int p = accumulate(v.begin(), v.end(), 0);
  for (int i=0; i<n; i++) cout << d / p * v[i] << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}