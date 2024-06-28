#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve(void) {
  const vector<string> v = {
    " @@@   @@@ ",
    "@   @ @   @",
    "@    @    @",
    "@         @",
    " @       @ ",
    "  @     @  ",
    "   @   @   ",
    "    @ @    ",
    "     @     "
  };

  int n; cin >> n;
  for (int i=0; i<9; i++) {
    cout << v[i];
    for (int j=1; j<n; j++) {
      cout << " " << v[i];
    }
    cout << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}