#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s; cin >> s;

  switch (s[0]) {
    case 'F': cout << "Foundation"; break;
    case 'C': cout << "Claves"; break;
    case 'V': cout << "Veritas"; break;
    case 'E': cout << "Exploration"; break;
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}