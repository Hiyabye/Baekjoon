#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

inline bool check_one(const string &s, int d) {
  unordered_set<string> st;
  for (int i=d+1; i<s.length(); i++) {
    string t = s.substr(i-d-1, 1) + s.substr(i, 1);
    if (st.find(t) != st.end()) return false;
    st.insert(t);
  }
  return true;
}

inline bool check_all(const string &s) {
  if (s.length() <= 2) return true;
  for (int i=0; i<s.length()-2; i++) {
    if (!check_one(s, i)) return false;
  }
  return true;
}

bool solve(void) {
  string s; cin >> s;
  if (s == "*") return false;

  cout << s << " is " << (check_all(s) ? "surprising." : "NOT surprising.") << "\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}