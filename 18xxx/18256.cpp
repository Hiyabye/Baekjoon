#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s; cin >> s;

  cout << (s.find('0') != string::npos) + (s.find('1') != string::npos) << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}