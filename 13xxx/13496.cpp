#include <iostream>
using namespace std;

void solve(int idx) {
  int n, s, d; cin >> n >> s >> d;

  int ans = 0;
  for (int i=0; i<n; i++) {
    int x, y; cin >> x >> y;
    if (d * s >= x) ans += y;
  }
  cout << "Data Set " << idx << ":\n" << ans << "\n\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  int k; cin >> k;
  for (int i=1; i<=k; i++) solve(i);
  return 0;
}