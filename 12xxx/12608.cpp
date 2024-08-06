#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

unordered_map<char, int> mp = {
  {'a', 2}, {'b', 22}, {'c', 222},
  {'d', 3}, {'e', 33}, {'f', 333},
  {'g', 4}, {'h', 44}, {'i', 444},
  {'j', 5}, {'k', 55}, {'l', 555},
  {'m', 6}, {'n', 66}, {'o', 666},
  {'p', 7}, {'q', 77}, {'r', 777}, {'s', 7777},
  {'t', 8}, {'u', 88}, {'v', 888},
  {'w', 9}, {'x', 99}, {'y', 999}, {'z', 9999},
  {' ', 0}
};

void solve(int idx) {
  string s; getline(cin, s);

  cout << "Case #" << idx << ": " << mp[s[0]];
  for (int i=1; i<s.length(); i++) {
    if (mp[s[i]] % 10 == mp[s[i-1]] % 10) cout << " ";
    cout << mp[s[i]];
  }
  cout << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  cin.ignore();
  for (int i=1; i<=n; i++) solve(i);
  return 0;
}