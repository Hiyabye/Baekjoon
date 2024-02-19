#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<char> v(n);
  for (int i=0; i<n; i++) cin >> v[i];
  char c; cin >> c;

  int ans = 0;
  for (int i=0; i<n; i++) ans += (v[i] == c);
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}