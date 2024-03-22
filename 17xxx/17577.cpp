#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

bool solve(void) {
  int n, m; cin >> n >> m;
  if (n == 0 && m == 0) return false;

  vector<int> s(n, 0);
  for (int i=0; i<m; i++) {
    for (int j=0; j<n; j++) {
      int p; cin >> p;
      s[j] += p;
    }
  }
  cout << *max_element(s.begin(), s.end()) << "\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}