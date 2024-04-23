#include <iostream>
#include <map>
#include <string>
using namespace std;

map<int, string> mp = {
  {1, "I"}, {2, "II"}, {3, "III"}, {4, "IV"},
  {5, "V"}, {6, "VI"}, {7, "VII"}, {8, "VIII"},
  {9, "IX"}, {10, "X"}, {11, "XI"}, {12, "XII"}
};

void solve(void) {
  int n; cin >> n;
  string s; cin >> s;

  for (int i=1; i<=12; i++) {
    if (s.find(mp[i]) != string::npos) cout << i << " ";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}