#include <cctype>
#include <cmath>
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

const double PI = acos(-1.0);
const double INCH = 2.54;

int solve(const string &s) {
  stringstream ss(s); string t;
  string a, c; double b, d, e; ss >> a >> b >> c >> d;

  while (ss >> t) {
    if (isalpha(t[0])) continue;
    e = stod(t);
    break;
  }
  return e * INCH * PI + 2.0 * b * PI * d / 1000 + 0.5;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string s;
  while (getline(cin, s)) cout << s << ": " << solve(s) << "\n";
  return 0;
}