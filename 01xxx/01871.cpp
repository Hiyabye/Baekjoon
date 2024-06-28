#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void solve(void) {
  string s; cin >> s;
  cout << (abs((s[0]-'A')*676 + (s[1]-'A')*26 + (s[2]-'A') - stoi(s.substr(4))) <= 100 ? "nice\n" : "not nice\n");
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  while (n--) {
    solve();
  }
  return 0;
}