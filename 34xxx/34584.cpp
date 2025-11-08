#include <iostream>
using namespace std;

bool solve(void) {
  int x, d; cin >> x >> d;

  return x * 2 > d;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "take" : "double") << " it";
  return 0;
}