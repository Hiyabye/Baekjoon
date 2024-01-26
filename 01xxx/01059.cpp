#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int l; cin >> l;
  vector<int> s(l);
  for (int i=0; i<l; i++) cin >> s[i];
  sort(s.begin(), s.end());
  int n; cin >> n;

  int ans = 0;
  for (int i=1; i<s.back(); i++) {
    for (int j=i+1; j<=s.back(); j++) {
      if (n < i || n > j) continue;
      bool flag = true;
      for (int k=0; k<l; k++) {
        if (i <= s[k] && s[k] <= j) {
          flag = false;
          break;
        }
      }
      if (flag) ans++;
    }
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}