#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s; cin >> s;

  if (s.find('U') == string::npos) cout << 'U';
  if (s.find('A') == string::npos) cout << 'A';
  if (s.find('P') == string::npos) cout << 'P';
  if (s.find('C') == string::npos) cout << 'C';
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}