#include <iostream>
#include <vector>
using namespace std;

void solve(int idx) {
  vector<int> a(6), b(7);
  for (int i=0; i<6; i++) cin >> a[i];
  for (int i=0; i<7; i++) cin >> b[i];

  int c[6] = {1, 2, 3, 3, 4, 10};
  int d[7] = {1, 2, 2, 2, 3, 5, 10};
  int sum_a = 0, sum_b = 0;
  for (int i=0; i<6; i++) sum_a += a[i] * c[i];
  for (int i=0; i<7; i++) sum_b += b[i] * d[i];

  cout << "Battle " << idx << ": ";
  if (sum_a > sum_b) cout << "Good triumphs over Evil\n";
  else if (sum_a < sum_b) cout << "Evil eradicates all trace of Good\n";
  else cout << "No victor on this battle field\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  for (int i=1; i<=t; i++) solve(i);
  return 0;
}