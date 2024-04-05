#include <iostream>
using namespace std;

bool solve(void) {
  double a, b, c; cin >> a >> b >> c;
  if (a == 0 && b == 0 && c == 0) return false;

  bool flag = false;
  if (a <= 4.5 && b >= 150 && c >= 200) cout << "Wide Receiver ", flag = true;
  if (a <= 6.0 && b >= 300 && c >= 500) cout << "Lineman ", flag = true;
  if (a <= 5.0 && b >= 200 && c >= 300) cout << "Quarterback ", flag = true;
  if (!flag) cout << "No positions";
  cout << "\n";

  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}