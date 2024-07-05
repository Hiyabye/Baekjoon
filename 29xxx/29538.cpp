#include <iomanip>
#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

void solve(void) {
  int m, n, a; cin >> m >> n >> a;
  vector<int> w(n);
  for (int i=0; i<n; i++) cin >> w[i];

  if (a >= 1000) {
    cout << "Impossible\n";
  } else {
    cout << fixed << setprecision(7) << (a * (m + accumulate(w.begin(), w.end(), 0))) / (1000.0 - a);
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}