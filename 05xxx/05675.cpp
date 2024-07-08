#include <iostream>
using namespace std;

bool solve(int a) {
  return a % 6;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int a;
  while (cin >> a) cout << (solve(a) ? 'N' : 'Y') << "\n";
  return 0;
}