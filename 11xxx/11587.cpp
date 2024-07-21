#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

unordered_map<char, char> mp = {
  {'a', '2'}, {'b', '2'}, {'c', '2'},
  {'d', '3'}, {'e', '3'}, {'f', '3'},
  {'g', '4'}, {'h', '4'}, {'i', '4'},
  {'j', '5'}, {'k', '5'}, {'l', '5'},
  {'m', '6'}, {'n', '6'}, {'o', '6'},
  {'p', '7'}, {'q', '7'}, {'r', '7'}, {'s', '7'},
  {'t', '8'}, {'u', '8'}, {'v', '8'},
  {'w', '9'}, {'x', '9'}, {'y', '9'}, {'z', '9'}
};

inline string calc(const string &s) {
  string ret = "";
  for (char c : s) ret += mp[c];
  return ret;
}

void solve(void) {
  int n; cin >> n;
  vector<string> v(n);
  for (int i=0; i<n; i++) cin >> v[i];
  string s; cin >> s;

  int ans = 0;
  for (int i=0; i<n; i++) {
    if (calc(v[i]) == s) ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}