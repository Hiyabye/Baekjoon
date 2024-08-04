#include <algorithm>
#include <iostream>
#include <string>
#include <tuple>
#include <unordered_map>
#include <utility>
using namespace std;

struct pair_hash {
  size_t operator()(const tuple<char, char, string> &t) const {
    return hash<string>{}(get<2>(t));
  }
};

void solve(void) {
  int n; cin >> n;
  unordered_map<tuple<char, char, string>, string, pair_hash> mp;
  while (n--) {
    string s; cin >> s;
    char a = s.front(), b = s.back();
    string t = s; sort(t.begin(), t.end());
    mp[{a, b, t}] = s;
  }

  int m; cin >> m;
  while (m--) {
    string s; cin >> s;
    char a = s.front(), b = s.back();
    string t = s; sort(t.begin(), t.end());
    cout << mp[{a, b, t}] << " ";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}