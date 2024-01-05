#include <iostream>
using namespace std;

bool solve(void) {
  int a, b, c; cin >> a >> b >> c;
  if (a == 0 && b == 0 && c == 0) return false;

  if (b-a == c-b) cout << "AP " << c+(b-a) << "\n";
  else cout << "GP " << c*(b/a) << "\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);
  
  while (solve());
  return 0;
}