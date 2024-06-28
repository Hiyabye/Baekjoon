#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<long long> v(n);
  for (int i=0; i<n; i++) cin >> v[i];
  long long c; cin >> c;

  long long ans = 0;
  for (int i=0; i<n; i++) {
    ans += (v[i]+c-1) / c;
  }
  cout << ans * c;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}