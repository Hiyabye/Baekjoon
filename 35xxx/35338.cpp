#include <iostream>
#include <string>
using namespace std;

inline char re(char c) {
  return c == 'M' ? 'O' : 'M';
}

void solve(int k) {
  int n; cin >> n;
  string s; cin >> s;

  cout << "YES\n";
  if (k == 0) return;

  for (int i=n-1, j=0; i>=0; i--) {
    if (j & 1) s[i] = re(s[i]);
    if (s[i] == 'O') j++;
  }
  cout << s << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t, k; cin >> t >> k;
  while (t--) solve(k);
  return 0;
}