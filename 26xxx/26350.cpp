#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int d; cin >> d;
  vector<int> v(d);
  for (int i=0; i<d; i++) cin >> v[i];

  bool ans = true;
  for (int i=0; i<d; i++) {
    if (v[i-1] * 2 > v[i]) {
      ans = false;
      break;
    }
  }

  cout << "Denominations: ";
  for (int i=0; i<d; i++) cout << v[i] << " ";
  cout << "\n" << (ans ? "Good" : "Bad") << " coin denominations!\n\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  int n; cin >> n;
  while (n--) solve();
  return 0;
}