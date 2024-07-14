#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

bool solve(void) {
  int n, m, p; cin >> n >> m >> p;
  if (n == 0 && m == 0 && p == 0) return false;
  vector<int> x(n+1, 0);
  for (int i=1; i<=n; i++) cin >> x[i];

  if (x[m] == 0) {
    cout << "0\n";
    return true;
  }

  cout << accumulate(x.begin(), x.end(), 0) * (100 - p) / x[m] << "\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}