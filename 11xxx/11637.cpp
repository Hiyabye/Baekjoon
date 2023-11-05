#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> v(n);
  for (int i=0; i<n; i++) cin >> v[i];

  int mx = 0, ans = 0, sum = 0;
  for (int i=0; i<n; i++) {
    sum += v[i];
    if (v[i] > mx) {
      mx = v[i];
      ans = i+1;
    }
  }

  int cnt = 0;
  for (int i=0; i<n; i++) {
    if (v[i] == mx) cnt++;
  }

  if (cnt > 1) cout << "no winner\n";
  else if (mx > sum/2) cout << "majority winner " << ans << "\n";
  else cout << "minority winner " << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}