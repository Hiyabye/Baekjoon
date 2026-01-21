#include <iomanip>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve(int idx) {
  int r, p, d; cin >> r >> p >> d;
  vector<string> s(r);
  vector<double> a(r), b(r);
  for (int i=0; i<r; i++) cin >> s[i] >> a[i] >> b[i];

  double x = 0;
  for (int i=0; i<r; i++) {
    if (b[i] == 100.0) x = a[i];
  }

  cout << "Recipe # " << idx << "\n" << fixed << setprecision(1);
  for (int i=0; i<r; i++) {
    cout << s[i] << " " << x / p * d * b[i] / 100.0 << "\n";
  }
  cout << "----------------------------------------\n";

}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  for (int i=1; i<=t; i++) solve(i);
  return 0;
}