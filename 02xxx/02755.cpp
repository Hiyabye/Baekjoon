#include <iostream>
#include <iomanip>
#include <string>
#include <map>
using namespace std;

map<string, double> m = {
  {"A+", 4.3}, {"A0", 4.0}, {"A-", 3.7},
  {"B+", 3.3}, {"B0", 3.0}, {"B-", 2.7},
  {"C+", 2.3}, {"C0", 2.0}, {"C-", 1.7},
  {"D+", 1.3}, {"D0", 1.0}, {"D-", 0.7},
  {"F", 0.0}
};

void solve(void) {
  int n; cin >> n;

  int credit = 0;
  double sum = 0;
  for (int i=0; i<n; i++) {
    string a, c; int b; cin >> a >> b >> c;
    sum += b * m[c];
    credit += b;
  }
  sum += 1e-9;
  cout << fixed << setprecision(2) << sum / credit;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}