#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;
  int ans = 0;
  for (int i=0; i<n; i++) {
    string s; cin >> s;
    if (s.find('+') != string::npos) ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}