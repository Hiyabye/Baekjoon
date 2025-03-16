#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

bool solve(void) {
  int n; long long m; cin >> n >> m;
  vector<long long> a(n);
  for (int i=0; i<n; i++) cin >> a[i];

  return n + m <= accumulate(a.begin(), a.end(), 0LL);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "DIMI" : "OUT");
  return 0;
}