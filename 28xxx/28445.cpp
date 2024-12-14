#include <iostream>
#include <set>
#include <string>
#include <vector>
using namespace std;

void solve(void) {
  vector<string> v(4);
  for (int i=0; i<4; i++) cin >> v[i];

  set<string> ans;
  for (int i=0; i<4; i++) for (int j=0; j<4; j++) {
    ans.insert(v[i] + " " + v[j]);
  }

  for (const string &s : ans) {
    cout << s << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}