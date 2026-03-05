#include <iostream>
#include <string>
#include <vector>
using namespace std;

inline bool b(const string &s) {
  return s == "B+" || s == "B0" || s == "B-";
}

inline bool c(const string &s) {
  return s == "C+" || s == "C0" || s == "C-";
}

void solve(void) {
  int n; cin >> n;
  string s; cin >> s;

  vector<string> v;
  for (int i=0; i<s.length(); i++) {
    string t = s.substr(i, 1);
    if (i+1 == s.length()) t += '0';
    else if (s[i+1] == '+' || s[i+1] == '0' || s[i+1] == '-') t += s.substr(++i, 1);
    else t += '0';
    v.push_back(t);
  }

  for (int i=0; i<n; i++) {
    if (c(v[i])) {
      cout << 'B';
    } else if (v[i] == "B0" || v[i] == "B-") {
      cout << (i == 0 || c(v[i-1]) ? 'D' : 'B');
    } else if (v[i] == "A-" || v[i] == "B+") {
      cout << (i == 0 || v[i-1] == "B0" || v[i-1] == "B-" || c(v[i-1]) ? 'P' : 'D');
    } else if (v[i] == "A0") {
      cout << (i == 0 || v[i-1] == "A-" || b(v[i-1]) || c(v[i-1]) ? 'E' : 'P');
    } else {
      cout << 'E';
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}