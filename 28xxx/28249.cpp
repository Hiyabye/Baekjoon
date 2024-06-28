#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  int n; cin >> n;

  int t = 0;
  for (int i=0; i<n; i++) {
    string s; cin >> s;
    if (s == "Poblano") t += 1500;
    else if (s == "Mirasol") t += 6000;
    else if (s == "Serrano") t += 15500;
    else if (s == "Cayenne") t += 40000;
    else if (s == "Thai") t += 75000;
    else if (s == "Habanero") t += 125000;
  }
  cout << t;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}