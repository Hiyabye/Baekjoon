#include <iostream>
#include <string>
#include <unordered_set>
#include <vector>
using namespace std;

inline bool palindrome(const string &s) {
  int n = s.length();
  for (int i=0; i<n/2; i++) {
    if (s[i] != s[n-i-1]) return false;
  }
  return true;
}

void solve(const string &s) {
  vector<string> ans;
  unordered_set<string> us;
  for (int i=1; i<=s.length(); i++) for (int j=0; j+i-1<s.length(); j++) {
    string t = s.substr(j, i);
    if (us.find(t) == us.end() && palindrome(t)) {
      ans.push_back(t);
      us.insert(t);
    }
  }

  cout << ans.size() << " -";
  for (const string &t : ans) cout << " \"" << t << "\"";
  cout << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string s;
  while (getline(cin, s)) solve(s);
  return 0;
}