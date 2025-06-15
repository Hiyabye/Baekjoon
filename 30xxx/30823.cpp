#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  int n, k; cin >> n >> k;
  string s; cin >> s;

  for (int i=k-1; i<n; i++) cout << s[i];
  if ((n-k) & 1) for (int i=0; i<k-1; i++) cout << s[i];
  else           for (int i=k-2; i>=0; i--) cout << s[i];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}