#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

bool solve(void) {
  vector<int> a(3), b(3);
  for (int i=0; i<3; i++) {
    cin >> a[i] >> b[i];
    if (a[i] > b[i]) swap(a[i], b[i]);
  }

  if (b[0] >= b[1] && b[0] >= b[2]) {
    if (a[1] == a[2] && a[0] + a[1] == b[0] && b[1] + b[2] == b[0]) return true;
    if (a[1] == b[2] && a[0] + a[1] == b[0] && b[1] + a[2] == b[0]) return true;
    if (b[1] == a[2] && a[0] + b[1] == b[0] && a[1] + b[2] == b[0]) return true;
    if (b[1] == b[2] && a[0] + b[1] == b[0] && a[1] + a[2] == b[0]) return true;
  }
  if (b[1] >= b[0] && b[1] >= b[2]) {
    if (a[0] == a[2] && a[1] + a[0] == b[1] && b[0] + b[2] == b[1]) return true;
    if (a[0] == b[2] && a[1] + a[0] == b[1] && b[0] + a[2] == b[1]) return true;
    if (b[0] == a[2] && a[1] + b[0] == b[1] && a[0] + b[2] == b[1]) return true;
    if (b[0] == b[2] && a[1] + b[0] == b[1] && a[0] + a[2] == b[1]) return true;
  }
  if (b[2] >= b[0] && b[2] >= b[1]) {
    if (a[0] == a[1] && a[2] + a[0] == b[2] && b[0] + b[1] == b[2]) return true;
    if (a[0] == b[1] && a[2] + a[0] == b[2] && b[0] + a[1] == b[2]) return true;
    if (b[0] == a[1] && a[2] + b[0] == b[2] && a[0] + b[1] == b[2]) return true;
    if (b[0] == b[1] && a[2] + b[0] == b[2] && a[0] + a[1] == b[2]) return true;
  }
  if (b[0] == b[1] && b[1] == b[2]) return a[0] + a[1] + a[2] == b[0];

  return false;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "YES" : "NO");
  return 0;
}