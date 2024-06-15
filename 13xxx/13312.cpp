#include <cstdlib>
#include <iostream>
using namespace std;

void solve(void) {
  const int n = 50000;
  const int s = 1234;

  cout << 2 * n << "\n";
  srand(s);
  for (int i=0; i<n; i++) cout << rand() % 1000000000 << "\n";
  srand(s);
  for (int i=0; i<n; i++) cout << -(rand() % 1000000000) << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}