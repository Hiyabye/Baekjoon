#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s; getline(cin, s);

  int g = 0, b = 0;
  for (auto c : s) {
    if (c == 'g' || c == 'G') g++;
    if (c == 'b' || c == 'B') b++;
  }
  cout << s << " is ";
  cout << (g > b ? "GOOD" : (g < b ? "A BADDY" : "NEUTRAL")) << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);

  int n; cin >> n;
  cin.ignore();
  while (n--) solve();
  return 0;
}