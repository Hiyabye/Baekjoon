#include <iostream>
#include <string>
using namespace std;

void solve(int idx) {
  int m; cin >> m;

  int ans = 0;
  while (m--) {
    string s; cin >> s;
    if (s == "sheep") ans++;
  }
  cout << "Case " << idx << ": This list contains " << ans << " sheep.\n\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  for (int i=1; i<=n; i++) solve(i);
  return 0;
}