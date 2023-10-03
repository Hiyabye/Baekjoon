#include <iostream>
#include <algorithm>
using namespace std;

bool solve(void) {
  int a, b; cin >> a >> b;
  if (a == 0 && b == 0) return false;

  cout << min(2*a-b, 2*b-a) << "\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);

  while (solve());
  return 0;
}