#include <algorithm>
#include <iostream>
#include <map>
#include <string>
using namespace std;

void solve(void) {
  int n; cin >> n;
  string s; cin >> s;

  map<char, int> m;
  for (int i=0; i<n; i++) {
    m[s[i]]++;
  }
  cout << n - max({m['N'], m['S'], m['W'], m['E']});
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}