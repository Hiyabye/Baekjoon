#include <iostream>
#include <unordered_map>
using namespace std;

unordered_map<char, char> mp = {
  {'a', 'y'}, {'b', 'h'}, {'c', 'e'}, {'d', 's'}, {'e', 'o'}, {'f', 'c'},
  {'g', 'v'}, {'h', 'x'}, {'i', 'd'}, {'j', 'u'}, {'k', 'i'}, {'l', 'g'},
  {'m', 'l'}, {'n', 'b'}, {'o', 'k'}, {'p', 'r'}, {'q', 'z'}, {'r', 't'},
  {'s', 'n'}, {'t', 'w'}, {'u', 'j'}, {'v', 'p'}, {'w', 'f'}, {'x', 'm'},
  {'y', 'a'}, {'z', 'q'}, {' ', ' '}
};

void solve(int idx) {
  string s; getline(cin, s);

  cout << "Case #" << idx << ": ";
  for (char c : s) cout << mp[c];
  cout << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  cin.ignore();
  for (int i=1; i<=t; i++) solve(i);
  return 0;
}