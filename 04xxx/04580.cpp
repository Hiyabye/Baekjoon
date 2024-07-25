#include <iostream>
using namespace std;

bool solve(void) {
  int k; cin >> k;
  if (k == 0) return false;

  int cur = 0;
  for (int i=1; i<=k; i++) {
    int p; cin >> p;
    for (int j=cur; j<p; j++) cout << i << " ";
    cur = p;
  }
  cout << "\n";

  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}