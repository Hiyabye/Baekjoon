#include <iostream>
#include <string>
using namespace std;

bool solve(void) {
  string s; int n; cin >> s >> n;
  if (s == "#" && n == 0) return false;

  string a; int b; cin >> a >> b;
  while (a != "X") {
    if (a == "B") n += (n + b <= 68) * b;
    else if (a == "C") n -= (n - b >= 0) * b;
    cin >> a >> b;
  }
  cout << s << " " << n << "\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}