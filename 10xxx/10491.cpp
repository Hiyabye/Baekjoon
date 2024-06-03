#include <iostream>
#include <string>
using namespace std;

bool solve(string &s) {
  for (char &c : s) {
    if ('A' <= c && c <= 'Z') c = c - 'A' + 'a';
  }

  return s.find("problem") != string::npos;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string s;
  while (getline(cin, s)) cout << (solve(s) ? "yes" : "no") << "\n";
  return 0;
}