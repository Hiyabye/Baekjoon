#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s;
  for (int i=0; i<3; i++) getline(cin, s);

  for (int i=0; i<10000; i++) cout << "-1\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}