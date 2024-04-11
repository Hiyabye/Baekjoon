#include <iostream>
#include <string>
using namespace std;

bool solve(void) {
  int n; cin >> n;

  int a = 0, b = 0, c = -30;
  while (n--) {
    string x, y; cin >> x >> y;
    if (x == "ocean") a += stoi(y.substr(1));
    else if (x == "oxygen") b += stoi(y.substr(1));
    else c += stoi(y.substr(1));
  }
  return a >= 9 && b >= 14 && c >= 8;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "liveable" : "not liveable");
  return 0;
}