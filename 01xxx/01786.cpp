#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> create(const string& s) {
  vector<int> ret(s.length());
  for (int i=1, j=0; i<s.length(); i++) {
    while (j > 0 && s[i] != s[j]) j = ret[j-1];
    if (s[i] == s[j]) ret[i] = ++j;
  }
  return ret;
}

vector<int> kmp(const string& t, const string& p) {
  vector<int> table = create(p), ret;
  for (int i=0, j=0; i<t.length(); i++) {
    while (j > 0 && t[i] != p[j]) j = table[j-1];
    if (t[i] == p[j]) {
      if (j == p.length()-1) {
        ret.push_back(i-p.length()+2);
        j = table[j];
      } else {
        j++;
      }
    }
  }
  return ret;
}

void solve(void) {
  string t; getline(cin, t);
  string p; getline(cin, p);

  vector<int> ans = kmp(t, p);
  cout << ans.size() << "\n";
  for (int n : ans) cout << n << " ";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}