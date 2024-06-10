#include <iostream>
#include <string>
using namespace std;

bool solve(void) {
  string a; getline(cin, a);
  if (a == "ENDOFINPUT") return false;
  string b; getline(cin, b);
  string c; getline(cin, c);

  for (char &ch : b) {
    if ('A' <= ch && ch <= 'Z') {
      ch = (ch - 'A' + 21) % 26 + 'A';
    }
  }
  cout << b << "\n";

  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}