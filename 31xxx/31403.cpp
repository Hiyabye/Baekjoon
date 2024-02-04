#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  int a; cin >> a;
  int b; cin >> b;
  int c; cin >> c;

  cout << a+b-c << "\n" << stoi(to_string(a)+to_string(b))-c << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}