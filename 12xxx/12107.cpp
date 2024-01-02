#include <iostream>
using namespace std;

void solve(void) {
  int n;
  cin >> n;

  cout << (n == 1 ? "B" : "A");
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}