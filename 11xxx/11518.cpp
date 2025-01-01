#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

unordered_map<char, string> morse;
unordered_map<string, string> dict;

void precompute(void) {
  for (int i=0; i<26; i++) {
    char c; string s; cin >> c >> s;
    morse[c] = s;
  }
  int n; cin >> n;
  while (n--) {
    string s; cin >> s;
    string t = "";
    for (char c : s) t += morse[c];
    dict[t] = s;
  }
}

bool solve(void) {
  int w; cin >> w;
  if (w == 0) return false;

  vector<string> v(w);
  for (int i=0; i<w; i++) cin >> v[i];
  for (int i=0; i<w; i++) {
    if (dict.find(v[i]) == dict.end()) {
      cout << v[i] << " not in dictionary.\n";
      return true;
    }
  }

  for (int i=0; i<w; i++) {
    cout << dict[v[i]] << " ";
  }
  cout << "\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  precompute();
  while (solve());
  return 0;
}