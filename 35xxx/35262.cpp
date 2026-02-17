#include <iostream>
#include <string>
using namespace std;

bool solve(void) {
  int n, k; cin >> n >> k;
  string s; cin >> s;

  int cnt = 0;
  for (int i=0; i<n; i++) {
    if (s[i] == '0') cnt++;
    else cnt = 0;
    if (cnt == k) return false;
  }
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << solve();
  return 0;
}