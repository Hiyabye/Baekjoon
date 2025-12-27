#include <iostream>
using namespace std;

bool solve(void) {
  int x; cin >> x;

  return x >= 6;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "Success!" : "Oh My God!");
  return 0;
}