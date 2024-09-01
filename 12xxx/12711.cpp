#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(int idx) {
  int p, k, l; cin >> p >> k >> l;
  vector<int> v(l);
  for (int i=0; i<l; i++) cin >> v[i];
  sort(v.begin(), v.end(), greater<int>());

  long long ans = 0;
  for (int i=0; i<l; i++) {
    ans += v[i] * (i / k + 1);
  }
  cout << "Case #" << idx << ": " << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  for (int i=1; i<=n; i++) solve(i);
  return 0;
}