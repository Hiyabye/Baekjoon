#include <iostream>
#include <vector>
using namespace std;

void solve(int idx) {
  int n, v; cin >> n >> v;
  vector<int> d(n), p(n);
  for (int i=0; i<n; i++) cin >> d[i] >> p[i];

  int ans = 0;
  while (v--) {
    int a1, a2, c; cin >> a1 >> a2 >> c; a1--; a2--;
    if (d[a1] == 1 || c == 1) ans += p[a1];
    if (d[a2] == 1 || c == 2) ans += p[a2];
  }
  cout << "Data Set " << idx << ":\n" << ans << "\n\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int k; cin >> k;
  for (int i=1; i<=k; i++) solve(i);
  return 0;
}