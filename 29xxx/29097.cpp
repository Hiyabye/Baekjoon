#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  int n, m, k, a, b, c; cin >> n >> m >> k >> a >> b >> c;

  int x = max({n * a, m * b, k * c});
  if (n * a == x) cout << "Joffrey ";
  if (m * b == x) cout << "Robb ";
  if (k * c == x) cout << "Stannis";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}