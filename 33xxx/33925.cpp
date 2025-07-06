#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  int n, j, s, h, k; cin >> n >> j >> s >> h >> k;
  string v[3];
  for (int i=0; i<3; i++) cin >> v[i];

  int a = 0, b = 0, c = 0;
  for (int i=0; i<n; i++) {
    if (v[1][i] == '^') a++;
    else if (v[2][i] == '^') b++;
    else if (v[1][i] == 'v') c++;
  }

  while (b--) {
    if (j) j--;
    else h -= k;
  }
  while (c--) {
    if (s) s--;
    else h -= k;
  }
  while (a--) {
    if (j > 1) j -= 2;
    else h -= k;
  }
  cout << (h > 0 ? h : -1);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}