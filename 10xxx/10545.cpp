#include <iostream>
#include <string>
#include <unordered_map>
#include <utility>
using namespace std;

unordered_map<char, pair<int, int>> mp = {
  {'a', {2, 1}}, {'b', {2, 2}}, {'c', {2, 3}},
  {'d', {3, 1}}, {'e', {3, 2}}, {'f', {3, 3}},
  {'g', {4, 1}}, {'h', {4, 2}}, {'i', {4, 3}},
  {'j', {5, 1}}, {'k', {5, 2}}, {'l', {5, 3}},
  {'m', {6, 1}}, {'n', {6, 2}}, {'o', {6, 3}},
  {'p', {7, 1}}, {'q', {7, 2}}, {'r', {7, 3}}, {'s', {7, 4}},
  {'t', {8, 1}}, {'u', {8, 2}}, {'v', {8, 3}},
  {'w', {9, 1}}, {'x', {9, 2}}, {'y', {9, 3}}, {'z', {9, 4}}
};

void solve(void) {
  unordered_map<int, int> key;
  for (int i=1; i<=9; i++) {
    int x; cin >> x;
    key[x] = i;
  }
  string s; cin >> s;

  for (int i=0; i<mp[s[0]].second; i++) cout << key[mp[s[0]].first];
  for (int i=1; i<s.length(); i++) {
    if (mp[s[i]].first == mp[s[i-1]].first) cout << "#";
    for (int j=0; j<mp[s[i]].second; j++) cout << key[mp[s[i]].first];
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}