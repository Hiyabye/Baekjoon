#include <iostream>
using namespace std;

bool solve(void) {
  int n; cin >> n;

  return n == 2 || n == 6 || n == 7 || n == 8;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "Think before submission" : "Solve harder problems");
  return 0;
}