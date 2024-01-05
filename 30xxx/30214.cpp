#include <iostream>
using namespace std;

void solve(void) {
  int s1, s2; cin >> s1 >> s2;

  cout << (s1 * 2 >= s2 ? "E" : "H");
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}