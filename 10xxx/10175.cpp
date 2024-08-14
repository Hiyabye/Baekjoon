#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s, t; cin >> s >> t;

  int b = count(t.begin(), t.end(), 'B') * 2;
  int c = count(t.begin(), t.end(), 'C') * 1;
  int m = count(t.begin(), t.end(), 'M') * 4;
  int w = count(t.begin(), t.end(), 'W') * 3;

  cout << s << ": ";
  if (b > c && b > m && b > w) cout << "The Bobcat is the dominant species\n";
  else if (c > b && c > m && c > w) cout << "The Coyote is the dominant species\n";
  else if (m > b && m > c && m > w) cout << "The Mountain Lion is the dominant species\n";
  else if (w > b && w > c && w > m) cout << "The Wolf is the dominant species\n";
  else cout << "There is no dominant species\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  while (n--) solve();
  return 0;
}