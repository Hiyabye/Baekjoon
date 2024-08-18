#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;
  string s; cin >> s;
  int a, c, g, t; cin >> a >> c >> g >> t;
  
  for (int i=0; i<m; i++) {
    if (s[i] == 'A') a--;
    else if (s[i] == 'C') c--;
    else if (s[i] == 'G') g--;
    else if (s[i] == 'T') t--;
  }

  int ans = a <= 0 && c <= 0 && g <= 0 && t <= 0;
  for (int i=m; i<n; i++) {
    if (s[i-m] == 'A') a++;
    else if (s[i-m] == 'C') c++;
    else if (s[i-m] == 'G') g++;
    else if (s[i-m] == 'T') t++;
    if (s[i] == 'A') a--;
    else if (s[i] == 'C') c--;
    else if (s[i] == 'G') g--;
    else if (s[i] == 'T') t--;
    ans += a <= 0 && c <= 0 && g <= 0 && t <= 0;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}