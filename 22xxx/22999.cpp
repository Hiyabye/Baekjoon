#include <cmath>
#include <iostream>
#include <string>
using namespace std;

void solve(int idx) {
  int n, k; cin >> n >> k;
  string s; cin >> s;

  int ans = 0;
  for (int i=0, j=n-1; i<j; i++, j--) {
    if (s[i] != s[j]) ans++;
  }
  cout << "Case #" << idx << ": " << abs(k-ans) << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  for (int i=1; i<=t; i++) solve(i);
  return 0;
}