#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

bool solve(int n) {
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];

  vector<bool> b(n, false);
  for (int i=1; i<n; i++) {
    int x = abs(a[i] - a[i-1]);
    if (x < 1 || x >= n || b[x]) return false;
    b[x] = true;
  }
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  while (cin >> n) cout << (solve(n) ? "Jolly" : "Not jolly") << "\n";
  return 0;
}