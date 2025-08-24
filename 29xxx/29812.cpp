#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  int n; cin >> n;
  string s; cin >> s;
  int d, m; cin >> d >> m;

  int a = 0, p = -1;
  for (int i=0; i<n; i++) {
    if (s[i] != 'H' && s[i] != 'Y' && s[i] != 'U') continue;
    a += min((i-p-1)*d, m+d);
    p = i;
  }
  a += min((n-p-1)*d, m+d);

  if (a) cout << a << "\n";
  else cout << "Nalmeok\n";

  int b = min({count(s.begin(), s.end(), 'H'),
               count(s.begin(), s.end(), 'Y'),
               count(s.begin(), s.end(), 'U')});

  if (b) cout << b;
  else cout << "I love HanYang University";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}