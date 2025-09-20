#include <iostream>
using namespace std;

bool solve(void) {
  int n; cin >> n;
  int c; cin >> c;
  int p; cin >> p;

  return n <= c * p;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "yes" : "no");
  return 0;
}