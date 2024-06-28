#include <iostream>
using namespace std;

void solve(void) {
  char c; cin >> c;

  if (c == 'M') cout << "MatKor";
  else if (c == 'W') cout << "WiCys";
  else if (c == 'C') cout << "CyKor";
  else if (c == 'A') cout << "AlKor";
  else cout << "$clear";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}