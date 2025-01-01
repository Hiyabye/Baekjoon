#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve(int idx) {
  int n, k; cin >> n >> k;
  string s; cin >> s;
  vector<string> v(n);
  for (int i=0; i<n; i++) cin >> v[i];

  int ans = 0;
  for (int i=0; i<k; i++) {
    bool flag = true;
    for (int j=0; j<n; j++) {
      if (v[j][i] == s[i]) {
        flag = false;
        break;
      }
    }
    if (flag) ans++;
  }
  cout << "Data Set " << idx << ":\n" << ans << "/" << k << "\n\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int k; cin >> k;
  for (int i=1; i<=k; i++) solve(i);
  return 0;
}