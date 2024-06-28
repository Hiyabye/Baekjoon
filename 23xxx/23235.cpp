#include <iostream>
using namespace std;

bool solve(int idx) {
  int n; cin >> n;
  if (n == 0) return false;

  int x; while(n--) cin >> x;
  cout << "Case " << idx << ": Sorting... done!\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int idx = 1;
  while (solve(idx++));
  return 0;
}