#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

unordered_map<char, char> mp = {
  {'A', '2'}, {'B', '2'}, {'C', '2'},
  {'D', '3'}, {'E', '3'}, {'F', '3'},
  {'G', '4'}, {'H', '4'}, {'I', '4'},
  {'J', '5'}, {'K', '5'}, {'L', '5'},
  {'M', '6'}, {'N', '6'}, {'O', '6'},
  {'P', '7'}, {'Q', '7'}, {'R', '7'}, {'S', '7'},
  {'T', '8'}, {'U', '8'}, {'V', '8'},
  {'W', '9'}, {'X', '9'}, {'Y', '9'}, {'Z', '9'}
};

void solve(void) {
  string s; cin >> s;

  string ans = "";
  for (char c : s) {
    if (c == '-') continue;
    if ('0' <= c && c <= '9') ans += c;
    else ans += mp[c];
  }
  cout << ans.substr(0, 3) << "-" << ans.substr(3, 3) << "-" << ans.substr(6, 4) << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}