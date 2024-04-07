#include <cmath>
#include <iostream>
using namespace std;

bool solve(void) {
  int b; double w; cin >> b >> w;

  double ans = 0;
  while (b--) {
    double r; cin >> r;
    ans += pow(r, 3) * acos(-1) / 750.0;
  }
  return ans >= w;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int k; cin >> k;
  for (int i=1; i<=k; i++) {
    cout << "Data Set " << i << ":\n" << (solve() ? "Yes" : "No") << "\n\n";
  }
  return 0;
}