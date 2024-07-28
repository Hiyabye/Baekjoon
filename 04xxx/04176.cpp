#include <iostream>
#include <string>
#include <vector>
using namespace std;

inline string calc(const string &s) {
  return to_string(s.length());
}

bool solve(void) {
  string s; cin >> s;
  if (s == "END") return false;

  if (s == "1") {
    cout << "1\n";
    return true;
  }

  vector<string> ans = {s, calc(s)};
  while (ans[ans.size()-1] != ans[ans.size()-2]) {
    ans.push_back(calc(ans[ans.size()-1]));
  }
  cout << ans.size() - 1 << "\n";

  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}