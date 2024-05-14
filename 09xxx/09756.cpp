#include <iostream>
using namespace std;

bool solve(void) {
  long long m; cin >> m;
  if (m == 0) return false;

  cout << "Y " << m*m-m+1 << "\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}