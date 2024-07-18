#include <iostream>
#include <vector>
using namespace std;

void solve(int idx) {
  int m, n; cin >> m >> n;
  vector<int> v(m);
  for (int i=0; i<m; i++) cin >> v[i];

  int ans = 0;
  while (n--) {
    int h, w, d, i; cin >> h >> w >> d >> i; i--;
    ans += h * w * d * v[i];
  }
  cout << "Data Set " << idx << ":\n" << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int k; cin >> k;
  for (int i=1; i<=k; i++) solve(i);
  return 0;
}