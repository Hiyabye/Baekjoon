#include <cmath>
#include <iostream>
#include <string>
#include <unordered_map>
#include <utility>
using namespace std;

unordered_map<char, pair<int, int>> mp1 = {
  {'q', {0, 0}}, {'w', {1, 0}}, {'e', {2, 0}}, {'r', {3, 0}}, {'t', {4, 0}},
  {'a', {0, 1}}, {'s', {1, 1}}, {'d', {2, 1}}, {'f', {3, 1}}, {'g', {4, 1}},
  {'z', {0, 2}}, {'x', {1, 2}}, {'c', {2, 2}}, {'v', {3, 2}}
};

unordered_map<char, pair<int, int>> mp2 = {
  {'y', {5, 0}}, {'u', {6, 0}}, {'i', {7, 0}}, {'o', {8, 0}}, {'p', {9, 0}},
  {'h', {5, 1}}, {'j', {6, 1}}, {'k', {7, 1}}, {'l', {8, 1}}, {'b', {4, 2}},
  {'n', {5, 2}}, {'m', {6, 2}}
};

inline int calc(const pair<int, int> &a, const pair<int, int> &b) {
  return abs(a.first - b.first) + abs(a.second - b.second);
}

void solve(void) {
  char sl, sr; cin >> sl >> sr;
  string s; cin >> s;

  int ans = 0;
  for (char c : s) {
    if (mp1.find(c) != mp1.end()) {
      ans += calc(mp1[c], mp1[sl]);
      sl = c;
    } else {
      ans += calc(mp2[c], mp2[sr]);
      sr = c;
    }
    ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}