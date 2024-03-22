#include <iostream>
#include <map>
#include <string>
using namespace std;

map<char, string> alpha = {
  {'a', "@"}, {'b', "8"}, {'c', "("}, {'d', "|)"}, {'e', "3"}, {'f', "#"}, {'g', "6"}, {'h', "[-]"}, {'i', "|"}, {'j', "_|"},
  {'k', "|<"}, {'l', "1"}, {'m', "[]\\/[]"}, {'n', "[]\\[]"}, {'o', "0"}, {'p', "|D"}, {'q', "(,)"}, {'r', "|Z"}, {'s', "$"},
  {'t', "']['"}, {'u', "|_|"}, {'v', "\\/"}, {'w', "\\/\\/"}, {'x', "}{"}, {'y', "`/"}, {'z', "2"}
};

void solve(void) {
  string s; getline(cin, s);

  for (char c : s) {
    if ('a' <= c && c <= 'z') cout << alpha[c];
    else if ('A' <= c && c <= 'Z') cout << alpha[c-'A'+'a'];
    else cout << c;
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}