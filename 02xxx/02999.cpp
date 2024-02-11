#include <cmath>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve(void) {
  string s; cin >> s;
  int n = s.length();

  int r = floor(sqrt(n));
  while (n % r) r--;
  int c = n / r;

  vector<vector<char>> a(c, vector<char>(r));
  for (int i=0; i<n; i++) a[i/r][i%r] = s[i];
  for (int i=0; i<r; i++) for (int j=0; j<c; j++) cout << a[j][i];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}