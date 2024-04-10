#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(int p) {
  int m; cin >> m;
  vector<int> v(m);
  for (int i=0; i<m; i++) cin >> v[i];

  cout << (find(v.begin(), v.end(), p) != v.end() ? "KEEP" : "REMOVE") << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, p, s; cin >> n >> p >> s;
  while (s--) solve(p);
  return 0;
}