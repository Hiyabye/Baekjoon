#include <iostream>
using namespace std;

void solve(int idx) {
  int m; cin >> m;

  int t = 0, d = 0;
  while (m--) {
    int a, b; cin >> a >> b;
    if (a == 1 && b == 2) t += 6;
    else if (a == 2 && b == 1) d += 6;
    else if (b == a + 1) t += a + b;
    else if (a == b + 1) d += a + b;
    else if (a > b) t += a;
    else if (b > a) d += b;
  }
  cout << "Game " << idx << ": Tessa " << t << " Danny " << d << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  for (int i=1; i<=n; i++) solve(i);
  return 0;
}