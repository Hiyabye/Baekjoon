#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

string reverse(string s) {
  for (int i=0; i<s.length()/2; i++) {
    swap(s[i], s[s.length()-1-i]);
  }
  return s;
}

void solve(void) {
  int n; cin >> n;
  vector<string> v(n);
  for (int i=0; i<n; i++) cin >> v[i];

  for (int i=0; i<n; i++) {
    if (find(v.begin(), v.end(), reverse(v[i])) != v.end()) {
      cout << v[i].length() << " " << v[i][v[i].length()/2];
      return;
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}