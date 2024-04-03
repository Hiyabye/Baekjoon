#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  int n; cin >> n;
  string str; cin >> str;

  int b = 0, s = 0, a = 0;
  for (char c : str) {
    if (c == 'B') b++;
    else if (c == 'S') s++;
    else a++;
  }

  if (b == s && s == a) cout << "SCU";
  else if (b == s && s > a) cout << "BS";
  else if (s == a && a > b) cout << "SA";
  else if (b == a && a > s) cout << "BA";
  else if (b > s && b > a) cout << "B";
  else if (s > a && s > b) cout << "S";
  else if (a > b && a > s) cout << "A";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}