#include <iostream>
#include <string>
using namespace std;

bool solve(void) {
  string a; cin >> a;
  string b; cin >> b;

  int a1 = a.find('|'), b1 = b.find('|');
  int a2 = a.length() - a1 - 1, b2 = b.length() - b1 - 1;

  return a1 == b1 || a1 == b2 || a2 == b1 || a2 == b2;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "Yes" : "No");
  return 0;
}