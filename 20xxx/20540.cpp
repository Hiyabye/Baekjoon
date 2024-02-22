#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s; cin >> s;

  cout << (s[0] == 'E' ? 'I' : 'E');
  cout << (s[1] == 'S' ? 'N' : 'S');
  cout << (s[2] == 'T' ? 'F' : 'T');
  cout << (s[3] == 'J' ? 'P' : 'J');
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}