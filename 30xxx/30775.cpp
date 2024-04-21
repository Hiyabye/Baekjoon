#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

void solve(void) {
  int m, k; cin >> m >> k;
  vector<long long> n(k);
  for (int i=0; i<k; i++) cin >> n[i];

  cout << (accumulate(n.begin(), n.end(), 0LL) + m - 1) / m;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}