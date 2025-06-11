#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool solve(void) {
  int n; cin >> n;
  if (n == 0) return false;
  string s; cin.ignore(); getline(cin, s);

  vector<bool> v(11, false);
  while (s != "right on") {
    if (s == "too high") while (n <= 10) v[n++] = true;
    else if (s == "too low") while (n > 0) v[n--] = true;
    cin >> n; cin.ignore(); getline(cin, s);
  }
  cout << (v[n] ? "Stan is dishonest" : "Stan may be honest") << "\n";

  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}