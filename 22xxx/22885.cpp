#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(int idx) {
  int n; cin >> n;
  vector<int> l(n);
  for (int i=0; i<n; i++) cin >> l[i];

  int ans = 0;
  for (int i=0; i<n-1; i++) {
    int cnt = distance(l.begin(), min_element(l.begin()+i, l.end())) - i + 1;
    reverse(l.begin()+i, l.begin()+i+cnt);
    ans += cnt;
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