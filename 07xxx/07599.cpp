#include <iostream>
#include <string>
using namespace std;

bool solve(void) {
  string n; int f; cin >> n >> f;
  if (n == "#" && f == 0) return false;
  cout << n << " Library\n";

  int c; cin >> c;
  for (int i=1; i<=c; i++) {
    int w; string s; cin >> w >> s;
    cout << "Book " << i << " " << (f * s.length() + 2 <= w ? "horizontal" : "vertical") << "\n";
  }
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}