#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

string trim(string s) {
  while (s.length() > 1 && s[0] == '0') s.erase(0, 1);
  return s;
}

void solve(void) {
  int n; cin >> n;
  
  vector<string> v;
  while (n--) {
    string s; cin >> s;
    string num = "";
    for (char c : s) {
      if (c < '0' || c > '9') {
        if (num != "") v.push_back(trim(num));
        num = "";
        continue;
      }
      num += c;
    }
    if (num != "") v.push_back(trim(num));
  }

  sort(v.begin(), v.end(), [](string a, string b) {
    if (a.length() != b.length()) return a.length() < b.length();
    return a < b;
  });

  for (string s : v) cout << s << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}