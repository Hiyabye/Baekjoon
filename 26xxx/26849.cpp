#include <algorithm>
#include <iomanip>
#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<double> v(n);
  for (int i=0; i<n; i++) {
    double a, b; cin >> a >> b;
    v[i] = a / b;
  }

  cout << fixed << setprecision(7) << *min_element(v.begin(), v.end()) << " ";
  cout << fixed << setprecision(7) << *max_element(v.begin(), v.end()) << " ";
  cout << fixed << setprecision(7) << accumulate(v.begin(), v.end(), 0.0);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}