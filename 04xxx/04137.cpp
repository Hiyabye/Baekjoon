#include <cctype>
#include <iostream>
#include <map>
#include <string>
using namespace std;

map<char, int> mp = {
  {'A', 2}, {'B', 2}, {'C', 2}, {'D', 3}, {'E', 3}, {'F', 3},
  {'G', 4}, {'H', 4}, {'I', 4}, {'J', 5}, {'K', 5}, {'L', 5},
  {'M', 6}, {'N', 6}, {'O', 6}, {'P', 7}, {'R', 7}, {'S', 7},
  {'T', 8}, {'U', 8}, {'V', 8}, {'W', 9}, {'X', 9}, {'Y', 9}
};

inline string calc(const string &s) {
  string res;
  for (char c : s) {
    if (c == '-') continue;
    if (isdigit(c)) res += c;
    else res += to_string(mp[c]);
  }
  return res.substr(0, 3) + "-" + res.substr(3);
}

void solve(void) {
  int n; cin >> n;

  map<string, int> mp;
  while (n--) {
    string s; cin >> s;
    mp[calc(s)]++;
  }

  bool flag = false;
  for (auto [k, v] : mp) {
    if (v > 1) {
      cout << k << " " << v << "\n";
      flag = true;
    }
  }
  if (!flag) cout << "No duplicates.\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}