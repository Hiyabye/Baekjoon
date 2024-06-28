#include <iostream>
using namespace std;

void solve(void) {
  int t1, e1, f1; cin >> t1 >> e1 >> f1;
  int t2, e2, f2; cin >> t2 >> e2 >> f2;

  int max = 3 * t1 + 20 * e1 + 120 * f1;
  int mel = 3 * t2 + 20 * e2 + 120 * f2;
  cout << (max > mel ? "Max" : max < mel ? "Mel" : "Draw");
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}