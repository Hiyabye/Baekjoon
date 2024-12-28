#include <iostream>
using namespace std;

void solve(void) {
  int a, b; cin >> a >> b;

  switch (a % 10) {
    case 0: cout << 0; break;
    case 1: cout << 1; break;
    case 2: cout << (b & 2 ? (b & 1 ? 8 : 4) : (b & 1 ? 2 : 6)); break;
    case 3: cout << (b & 2 ? (b & 1 ? 7 : 9) : (b & 1 ? 3 : 1)); break;
    case 4: cout << (b & 1 ? 4 : 6); break;
    case 5: cout << 5; break;
    case 6: cout << 6; break;
    case 7: cout << (b & 2 ? (b & 1 ? 3 : 9) : (b & 1 ? 7 : 1)); break;
    case 8: cout << (b & 2 ? (b & 1 ? 2 : 4) : (b & 1 ? 8 : 6)); break;
    case 9: cout << (b & 1 ? 9 : 1); break;
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}