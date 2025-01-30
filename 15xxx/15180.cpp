#include <iostream>
#include <set>
#include <string>
#include <vector>
using namespace std;

inline bool check(const vector<int> &v) {
  set<int> st(v.begin(), v.end());
  return v.size() >= 5 && st.size() == v.size();
}

void solve(void) {
  string s; cin >> s;
  vector<int> v(1, stoi(s));

  while (cin >> s) {
    if (s == "#") break;
    int d = (s[0] == 'A' ? -1 : 1) * (s[1] - '0');
    v.push_back(1 + (v.back() + d + 7) % 8);
  }

  for (int x : v) cout << x << " ";
  if (!check(v)) cout << "reject";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}