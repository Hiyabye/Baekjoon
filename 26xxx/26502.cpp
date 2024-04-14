#include <iostream>
#include <map>
#include <string>
using namespace std;

map<char, char> mp = {
  {'a', 'e'}, {'e', 'i'}, {'i', 'o'}, {'o', 'u'}, {'u', 'y'}, {'y', 'a'},
  {'A', 'E'}, {'E', 'I'}, {'I', 'O'}, {'O', 'U'}, {'U', 'Y'}, {'Y', 'A'}
};

void solve(void) {
  string s; getline(cin, s);

  for (auto &c : s) {
    cout << (mp.find(c) != mp.end() ? mp[c] : c);
  }
  cout << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  cin.ignore();
  while (n--) solve();
  return 0;
}