#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s; cin >> s;

  int a = 0, b = 0;
  for (int i=0; i<s.length()-2; i++) {
    if (s.substr(i, 3) == "JOI") a++;
    if (s.substr(i, 3) == "IOI") b++;
  }
  cout << a << "\n" << b;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}