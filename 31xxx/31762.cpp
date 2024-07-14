#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool solve(void) {
  int r, c, k; cin >> r >> c >> k;
  vector<string> m(r), p(r);
  for (int i=0; i<r; i++) cin >> m[i] >> p[i];

  for (int i=0; i<r; i++) {
    if (p[i].find('*') == string::npos) continue;
    if (m[i].find('-') != string::npos) return false;
  }
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? 'Y' : 'N');
  return 0;
}