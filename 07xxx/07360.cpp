#include <iostream>
#include <vector>
using namespace std;

bool solve(void) {
  int n; cin >> n;
  if (n == 0) return false;
  vector<int> x(n), y(n);
  for (int i=0; i<n; i++) cin >> x[i];
  for (int i=0; i<n; i++) cin >> y[i];

  int a = 0, b = 0;
  for (int i=0; i<n; i++) {
    if (x[i] > y[i] + 1) a += x[i];
    else if (y[i] > x[i] + 1) b += y[i];
    else if (x[i] == y[i] + 1) {
      b += (y[i] == 1 ? 6 : x[i] + y[i]);
    } else if (y[i] == x[i] + 1) {
      a += (x[i] == 1 ? 6 : x[i] + y[i]);
    }
  }
  cout << "A has " << a << " points. B has " << b << " points.\n\n";

  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}