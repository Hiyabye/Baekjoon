#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int t; cin >> t;
  vector<int> v(20);
  for (int i=0; i<20; i++) cin >> v[i];

  int ans = 0;
  for (int i=0; i<20; i++) {
    for (int j=0; j<19; j++) {
      if (v[j] > v[j+1]) {
        swap(v[j], v[j+1]);
        ans++;
      }
    }
  }
  cout << t << " " << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int p; cin >> p;
  while (p--) solve();
  return 0;
}