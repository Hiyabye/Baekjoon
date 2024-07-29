#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

inline int calc(const string &s) {
  unordered_set<char> us;
  for (char c : s) if (c != ' ') us.insert(c);
  return us.size();
}

inline bool cmp(const string &a, const string &b) {
  int ca = calc(a), cb = calc(b);
  if (ca != cb) return ca > cb;
  return a < b;
}

void solve(int idx) {
  int n; cin >> n;
  cin.ignore();

  string ans; getline(cin, ans); n--;
  while (n--) {
    string s; getline(cin, s);
    if (cmp(s, ans)) ans = s;
  }
  cout << "Case #" << idx << ": " << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  for (int i=1; i<=t; i++) solve(i);
  return 0;
}