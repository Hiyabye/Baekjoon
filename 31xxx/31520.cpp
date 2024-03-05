#include <iostream>
#include <string>
using namespace std;

int solve(void) {
  string n; cin >> n;

  for (int i=0; i<n.length(); i++) {
    if (n[i]-'0' != i+1) return -1;
  }
  return n.length();
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << solve();
  return 0;
}