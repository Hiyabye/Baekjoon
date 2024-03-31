#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve(void) {
  string s; cin >> s;
  int n = s.length();

  vector<string> v;
  for (int i=1; i<n-1; i++) {
    for (int j=i+1; j<n; j++) {
      string a = s.substr(0, i), b = s.substr(i, j-i), c = s.substr(j, n-j);
      reverse(a.begin(), a.end());
      reverse(b.begin(), b.end());
      reverse(c.begin(), c.end());
      v.push_back(a+b+c);
    }
  }
  sort(v.begin(), v.end());

  cout << v[0];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}