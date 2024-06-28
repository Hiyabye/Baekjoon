#include <iostream>
#include <iomanip>
using namespace std;

void solve(void) {
  int n, credit, total = 0;
  double grade, sum = 0;

  cin >> n;
  for (int i=0; i<n; i++) {
    cin >> credit >> grade;
    total += credit;
    sum += credit * grade;
  }

  cout << total << " " << fixed << setprecision(1) << sum/total << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}