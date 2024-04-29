#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  int n, k; cin >> n >> k;
  string s; cin >> s;

  for (int i=0; i<n; i++) {
    if (s[i] != 'P') continue;
    for (int j=i-k; j<=i+k; j++) {
      if (j < 0 || j >= n || s[j] != 'H') continue;
      s[j] = '.';
      break;
    }
  }
  cout << count(s.begin(), s.end(), '.') << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}