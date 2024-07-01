#include <cctype>
#include <iostream>
#include <string>
using namespace std;

bool solve(int idx) {
  char a, b; cin >> a >> b;
  if (a == '#' && b == '#') return false;
  int n; cin >> n;
  cin.ignore();

  cout << "Case " << idx << "\n";
  while (n--) {
    string s; getline(cin, s);
    for (char c : s) {
      cout << (tolower(c) == a || tolower(c) == b ? '_' : c);
    }
    cout << "\n";
  }
  cout << "\n";

  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int idx = 1;
  while (solve(idx++));
  return 0;
}