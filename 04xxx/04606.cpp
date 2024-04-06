#include <iostream>
#include <string>
using namespace std;

bool solve(void) {
  string s; getline(cin, s);
  if (s == "#") return false;

  for (char c : s) {
    switch (c) {
      case ' ': cout << "%20"; break;
      case '!': cout << "%21"; break;
      case '$': cout << "%24"; break;
      case '%': cout << "%25"; break;
      case '(': cout << "%28"; break;
      case ')': cout << "%29"; break;
      case '*': cout << "%2a"; break;
      default: cout << c;
    }
  }
  cout << "\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}