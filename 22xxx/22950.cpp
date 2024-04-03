#include <iostream>
#include <string>
using namespace std;

bool solve(void) {
  int n; cin >> n;
  string m; cin >> m;
  int k; cin >> k;

  if (k > n) return m.find('1') == string::npos;
  for (int i=n-1; i>=n-k; i--) {
    if (m[i] == '1') return false;
  }
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "YES" : "NO");
  return 0;
}