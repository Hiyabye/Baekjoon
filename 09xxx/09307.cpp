#include <cmath>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

string comma(double x) {
  string s = to_string(x);
  int pos = s.find('.');
  if (pos == string::npos) pos = s.length();
  s = s.substr(0, pos+3);
  for (int i=pos-3; i>0; i-=3) s.insert(i, ",");
  return s;
}

bool solve(void) {
  vector<double> a(101);
  cin >> a[1];
  if (a[1] == -1) return false;
  cin >> a[2] >> a[3];
  int n; cin >> n;

  for (int i=4; i<=n; i++) {
    a[i] = a[i-3] * a[i-2] / a[i-1];
    a[i] = round(a[i] * 100) / 100.0;
  }
  cout << "Month " << n << " cost: $" << comma(a[n]) << "\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  while (solve());
  return 0;
}