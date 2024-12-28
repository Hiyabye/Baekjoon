#include <iostream>
#include <vector>
using namespace std;

bool solve(void) {
  int n; cin >> n;
  if (n == 0) return false;
  vector<long long> m(n);
  for (int i=0; i<n; i++) cin >> m[i];

  long long ans = 0;
  for (int i=n-1; i>=0; i--) {
    for (int j=0; j<i; j++) m[j] += m[i];
    ans += m[i];
  }
  cout << ans << "\n";

  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}