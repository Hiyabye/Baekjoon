#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

inline int score(char a, char b) {
  if ((a == 'S' && b == 'P') || (a == 'P' && b == 'R') || (a == 'R' && b == 'S')) return 2;
  return a == b;
}

inline int calc(const vector<string> &v, int idx) {
  vector<int> x(3, 0);
  for (const string &s : v) {
    x[0] += score('S', s[idx]);
    x[1] += score('P', s[idx]);
    x[2] += score('R', s[idx]);
  }
  return *max_element(x.begin(), x.end());
}

void solve(void) {
  int r; cin >> r;
  string s; cin >> s;
  int n; cin >> n;
  vector<string> v(n);
  for (int i=0; i<n; i++) cin >> v[i];

  int a = 0, b = 0;
  for (int i=0; i<r; i++) {
    for (int j=0; j<n; j++) {
      a += score(s[i], v[j][i]);
    }
    b += calc(v, i);
  }
  cout << a << "\n" << b;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}