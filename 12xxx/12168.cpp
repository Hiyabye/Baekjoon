#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(int idx) {
  int d; cin >> d;
  vector<int> p(d);
  for (int i=0; i<d; i++) cin >> p[i];

  int ans = *max_element(p.begin(), p.end());
  for (int i=2; i<=ans; i++) {
    int cnt = 0;
    for (int j=0; j<d; j++) cnt += (p[j]-1)/i;
    ans = min(ans, i+cnt);
  }
  cout << "Case #" << idx << ": " << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  for (int i=1; i<=t; i++) solve(i);
  return 0;
}