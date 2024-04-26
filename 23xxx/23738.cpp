#include <iostream>
#include <map>
#include <string>
using namespace std;

map<char, string> mp = {
  {'B', "v"},
  {'E', "ye"},
  {'H', "n"},
  {'P', "r"},
  {'C', "s"},
  {'Y', "u"},
  {'X', "h"}
};

void solve(void) {
  string s; cin >> s;

  for (char a : s) {
    if (mp.find(a) != mp.end()) cout << mp[a];
    else cout << (char)(a - 'A' + 'a');
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}