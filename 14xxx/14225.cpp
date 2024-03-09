#include <iostream>
#include <set>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];

  set<int> s;
  for (int i=0; i<(1<<n); i++) {
    int sum = 0;
    for (int j=0; j<n; j++) {
      if (i & (1<<j)) sum += a[j];
    }
    s.insert(sum);
  }

  int ans = 1;
  while (s.count(ans)) ans++;
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}