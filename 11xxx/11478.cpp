#include <iostream>
#include <string>
#include <set>
using namespace std;

void solve(void) {
  string s;
  cin >> s;

  set<string> a;
  for (int i=0; i<s.size(); i++) {
    for (int j=1; j<=s.size()-i; j++) {
      a.insert(s.substr(i, j));
    }
  }
  cout << a.size();
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}