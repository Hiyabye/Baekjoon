#include <iostream>
using namespace std;

bool solve(void) {
  int x1, y1; cin >> x1 >> y1;
  int x2, y2; cin >> x2 >> y2;
  int x3, y3; cin >> x3 >> y3;

  return (y2 - y1) * (x3 - x2) != (y3 - y2) * (x2 - x1);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "WINNER WINNER CHICKEN DINNER!" : "WHERE IS MY CHICKEN?");
  return 0;
}