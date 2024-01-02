#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  int v; cin >> v;
  string s; cin >> s;

  int a = 0, b = 0;
  for (int i=0; i<v; i++) {
    if (s[i] == 'A') a++;
    else b++;
  }
  cout << (a > b ? "A" : (a < b ? "B" : "Tie"));
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}