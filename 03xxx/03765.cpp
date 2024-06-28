#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s;

  while (getline(cin, s)) cout << s << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}