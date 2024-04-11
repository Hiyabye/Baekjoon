#include <algorithm>
#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

void solve(int idx) {
  int n; cin >> n;
  vector<double> v(n);
  for (int i=0; i<n; i++) cin >> v[i];

  for (int i=1; i<n-1; i++) {
    v[i] = min(v[i], (v[i-1] + v[i+1]) / 2);
  }
  cout << "Case #" << idx << ": " << fixed << setprecision(5) << v[n-2] << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  for (int i=1; i<=t; i++) solve(i);
  return 0;
}