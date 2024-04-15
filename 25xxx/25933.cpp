#include <iostream>
#include <vector>
using namespace std;

bool color(const vector<int> &a, const vector<int> &b) {
  for (int i=0; i<3; i++) {
    if (a[i] > b[i]) return true;
    if (a[i] < b[i]) return false;
  }
  return false;
}

bool count(const vector<int> &a, const vector<int> &b) {
  return a[0] + a[1] + a[2] > b[0] + b[1] + b[2];
}

void solve(void) {
  vector<int> a(3), b(3);
  for (int i=0; i<3; i++) cin >> a[i];
  for (int i=0; i<3; i++) cin >> b[i];

  for (int i=0; i<3; i++) cout << a[i] << " ";
  for (int i=0; i<3; i++) cout << b[i] << " ";
  
  if (color(a, b) && count(a, b)) cout << "both";
  else if (color(a, b)) cout << "color";
  else if (count(a, b)) cout << "count";
  else cout << "none";
  cout << "\n\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  while (n--) solve();
  return 0;
}