#include <cmath>
#include <iostream>
#include <string>
using namespace std;

bool solve(void) {
  int n; cin >> n;
  string s; cin >> s;

  int cnt = 1;
  for (int i=1; i<n; i++) {
    cnt = (abs(s[i] - s[i-1]) == 1) ? cnt + 1 : 1;
    if (cnt == 5) return true;
  }
  return false;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "YES" : "NO");
  return 0;
}