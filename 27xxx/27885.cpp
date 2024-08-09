#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

inline int calc(const string &s) {
  return stoi(s.substr(0, 2)) * 3600 +
         stoi(s.substr(3, 2)) * 60 +
         stoi(s.substr(6, 2));
}

void solve(void) {
  int c, h; cin >> c >> h;

  unordered_set<int> st;
  for (int i=0; i<c+h; i++) {
    string s; cin >> s;
    int t = calc(s);
    for (int j=t; j<t+40; j++) st.insert(j);
  }
  cout << 86400 - st.size() << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}