#include <iostream>
using namespace std;

bool solve(void) {
  int a, b; cin >> a >> b;
  if (a == 0 && b == 0) return false;

  cout << a/b << " " << a-b*(a/b) << " / " << b << "\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);

  while (solve());
  return 0;
}