#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s; getline(cin, s);
  if (s.substr(0, 10) != "Simon says") return;

  cout << s.substr(10) << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);

  int n; cin >> n;
  cin.ignore();
  while (n--) solve();
  return 0;
}