#include <iostream>
using namespace std;

bool solve(void) {
  int n, m; cin >> n >> m;
  for (int i=0; i<m; i++) {
    int u, v; cin >> u >> v;
  }
  return n >= m;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "Yes" : "No");
  return 0;
}