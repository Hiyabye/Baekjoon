#include <iostream>
#include <string>
using namespace std;

bool solve(void) {
  string s; getline(cin, s);
  if (s.back() == '!') return false;

  cout << (s.back() == '?' ? "Quack!" : "*Nod*") << endl;
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}