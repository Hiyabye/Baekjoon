#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve(void) {
  int n; cin >> n;
  int m, k; cin >> m >> k;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];
  sort(a.begin(), a.end(), greater<int>());

  m *= k;
  for (int i=0; i<n; i++) {
    if (m > 0) m -= a[i];
    else {
      cout << i;
      return;
    }
  }
  if (m > 0) cout << "STRESS";
  else cout << n;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);

  solve();
  return 0;
}