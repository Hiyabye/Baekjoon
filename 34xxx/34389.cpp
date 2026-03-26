#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string a, b; int c; double d; cin >> a >> b >> c >> d;

  int meal = (b[0] == 'M' ? 19 : 14);
  int mun = (b.back() == '+' ? 35000 : 20000);
  int rem = mun - (int)(d * 100 + 0.5);

  cout << a << " " << meal - c << " ";
  cout << rem / 100 << "." << setfill('0') << setw(2) << rem % 100 << " ";

  if (meal > c && rem > 0) cout << "Use meal swipe or munch money";
  else if (meal == c && rem > 0) cout << "Use munch money";
  else if (meal > c && rem == 0) cout << "Use meal swipe";
  else cout << "Go to Downtown Golden!";
  cout << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  while (n--) solve();
  return 0;
}