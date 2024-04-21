#include <iostream>
#include <vector>
using namespace std;

void solve(int idx) {
  int l, n; cin >> l >> n;
  vector<int> p(n+1);
  for (int i=1; i<=n; i++) cin >> p[i];

  int ans = 1;
  while (p[l]) l = p[l], ans++;

  cout << "Data Set " << idx << ":\n";
  cout << ans << "\n\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int k; cin >> k;
  for (int i=1; i<=k; i++) solve(i);
  return 0;
}