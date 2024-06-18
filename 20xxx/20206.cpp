#include <iostream>
using namespace std;

bool solve(void) {
  int a, b, c; cin >> a >> b >> c;
  int x1, x2, y1, y2; cin >> x1 >> x2 >> y1 >> y2;

  int p1 = a * x1 + b * y1 + c;
  int p2 = a * x1 + b * y2 + c;
  int p3 = a * x2 + b * y1 + c;
  int p4 = a * x2 + b * y2 + c;

  return ((p1 <= 0) && (p2 <= 0) && (p3 <= 0) && (p4 <= 0)) || ((p1 >= 0) && (p2 >= 0) && (p3 >= 0) && (p4 >= 0));
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "Lucky" : "Poor");
  return 0;
}