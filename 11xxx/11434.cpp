#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(int idx) {
  int n, w, e; cin >> n >> w >> e;

  int ans = 0;
  while (n--) {
    int lww, lwe, lew, lee; cin >> lww >> lwe >> lew >> lee;
    ans += max(w * lww + e * lew, w * lwe + e * lee);
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