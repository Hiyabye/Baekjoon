#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool solve(void) {
  int n; cin >> n;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];
  int u, d; cin >> u >> d;

  string ans = "";
  for (int i=0; i<n; i++) {
    if (a[i] == 1) {
      if (u == 0) return false;
      ans += 'U'; u--;
    } else if (a[i] == 2) {
      if (d == 0) return false;
      ans += 'D'; d--;
    } else {
      ans += ' ';
    }
  }

  for (int i=0; i<n; i++) {
    if (ans[i] != ' ') continue;
    if (u) ans[i] = 'U', u--;
    else if (d) ans[i] = 'D', d--;
  }
  cout << "YES\n" << ans;
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  if (!solve()) cout << "NO";
  return 0;
}