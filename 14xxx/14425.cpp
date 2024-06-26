#include <iostream>
#include <map>
#include <string>
using namespace std;

void solve(void) {
  int n, m, ans = 0;
  cin >> n >> m;
  map<string, bool> a;
  
  string s;
  for (int i=0; i<n; i++) {
    cin >> s;
    a[s] = true;
  }
  for (int i=0; i<m; i++) {
    cin >> s;
    if (a[s]) ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}