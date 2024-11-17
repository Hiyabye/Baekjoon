#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  string s; cin >> s;

  vector<int> p, c;
  for (int i=0; i<n; i++) {
    if (s[i] == 'P') p.push_back(i);
    else if (s[i] == 'C') c.push_back(i);
  }

  for (int i=0; i<p.size() && i<c.size(); i++) {
    swap(s[p[i]], s[c[i]]);
  }
  cout << s;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}