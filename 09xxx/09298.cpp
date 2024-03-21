#include <algorithm>
#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

void solve(int idx) {
  int n; cin >> n;
  vector<double> x(n), y(n);
  for (int i=0; i<n; i++) cin >> x[i] >> y[i];

  double x1 = *max_element(x.begin(), x.end()) - *min_element(x.begin(), x.end());
  double y1 = *max_element(y.begin(), y.end()) - *min_element(y.begin(), y.end());

  cout << "Case " << idx << ": ";
  cout << "Area " << fixed << setprecision(10) << x1 * y1 << ", ";
  cout << "Perimeter " << fixed << setprecision(10) << x1 * 2 + y1 * 2 << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  for (int i=1; i<=t; i++) solve(i);
  return 0;
}