#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;
  vector<int> p(n, 0), q(n, 0);
  while (m--) {
    int a, c; char b; cin >> a >> b >> c;
    if (b == 'P') p[--a] = (c == 1 ? 1 : -1);
    if (b == 'M') q[--a] = (c == 0 ? 1 : -1);
  }

  int small = 0, big = 0;
  for (int i=0; i<n; i++) {
    if (p[i] == 1 && q[i] == 1) small++, big++;
    else if (p[i] != -1 && q[i] != -1) big++;
  }
  cout << small << " " << big;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}