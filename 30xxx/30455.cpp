#include <iostream>
using namespace std;

bool solve(void) {
  int n; cin >> n;

  return n % 2 == 0;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "Duck" : "Goose");
  return 0;
}