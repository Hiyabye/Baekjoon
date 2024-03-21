#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  int n, a, b; cin >> n >> a >> b;
  string s; cin >> s;

  for (int i=0; i<a-1; i++) cout << s[i];
  for (int i=b-1; i>=a-1; i--) cout << s[i];
  for (int i=b; i<n; i++) cout << s[i];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}