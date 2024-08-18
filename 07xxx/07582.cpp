#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

bool solve(void) {
  string n; int z; cin >> n >> z;
  if (n == "#" && z == 0) return false;
  int p; cin >> p;
  int s; cin >> s;

  while (s--) {
    int a, b; cin >> a >> b;
    p = max(p - a, 0);
    p = min(p + b, z);
  }
  cout << n << " " << p << "\n";

  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}