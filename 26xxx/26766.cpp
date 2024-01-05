#include <iostream>
using namespace std;

void solve(void) {
  cout << " @@@   @@@ \n";
  cout << "@   @ @   @\n";
  cout << "@    @    @\n";
  cout << "@         @\n";
  cout << " @       @ \n";
  cout << "  @     @  \n";
  cout << "   @   @   \n";
  cout << "    @ @    \n";
  cout << "     @     \n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  int n; cin >> n;
  while (n--) solve();
  return 0;
}