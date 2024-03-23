#include <cctype>
#include <iostream>
#include <set>
#include <string>
using namespace std;

bool solve(void) {
  string s; getline(cin, s);
  if (s == "#") return false;

  set<char> alpha;
  for (char c : s) {
    if (isalpha(c)) alpha.insert(tolower(c));
  }
  cout << alpha.size() << "\n";

  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}