#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

unordered_map<char, char> mp = {
  {'a', 'q'}, {'b', 'w'}, {'c', 'e'}, {'d', 'r'}, {'e', 't'}, {'f', 'y'}, {'g', 'u'},
  {'h', 'i'}, {'i', 'o'}, {'j', 'p'}, {'k', 'a'}, {'l', 's'}, {'m', 'd'}, {'n', 'f'},
  {'o', 'g'}, {'p', 'h'}, {'q', 'j'}, {'r', 'k'}, {'s', 'l'}, {'t', 'z'}, {'u', 'x'},
  {'v', 'c'}, {'w', 'v'}, {'x', 'b'}, {'y', 'n'}, {'z', 'm'}, {' ', ' '}
};

void solve(void) {
  int n; cin >> n; cin.ignore();
  string s; getline(cin, s);

  for (char c : s) cout << mp[c];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}