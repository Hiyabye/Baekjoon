#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s;
  while (getline(cin, s)) {
    while (s.find("iiing") != string::npos) s.replace(s.find("iiing"), 5, "th");
    cout << s << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}