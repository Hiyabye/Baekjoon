#include <iostream>
using namespace std;

bool solve(void) {
  int n; cin >> n;
  if (n == 0) return false;

  for (int i=1; i<=n; i++) {
    for (int j=0; j<i; j++) cout << "*";
    cout << "\n";
  }
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}