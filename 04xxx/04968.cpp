#include <iostream>
#include <vector>
using namespace std;

bool solve(void) {
  int n, m; cin >> n >> m;
  if (n == 0 && m == 0) return false;
  vector<int> s(n+m);
  for (int i=0; i<n+m; i++) cin >> s[i];

  int a = 0, b = 0;
  for (int i=0; i<n; i++) a += s[i];
  for (int i=n; i<n+m; i++) b += s[i];

  for (int i=0; i<n; i++) for (int j=n; j<n+m; j++) {
    if (a - s[i] + s[j] == b - s[j] + s[i]) {
      cout << s[i] << " " << s[j] << "\n";
      return true;
    }
  }
  cout << "-1\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}