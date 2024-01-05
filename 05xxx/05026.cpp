#include <iostream>
#include <string>
#include <sstream>
using namespace std;

void solve(void) {
  string s; cin >> s;
  if (s == "P=NP") {
    cout << "skipped\n";
    return;
  }

  stringstream ss(s);
  int a, b; char c;
  ss >> a >> c >> b;
  cout << a + b << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  int n; cin >> n;
  while (n--) solve();
  return 0;
}