#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s;
  s += (char)0xEF;
  s += (char)0xBF;
  s += (char)0xBD;
  cout << s;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}