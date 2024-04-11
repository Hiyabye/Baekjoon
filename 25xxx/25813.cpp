#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s; cin >> s;

  int u = s.find_first_of('U');
  int f = s.find_last_of('F');

  for (int i=0; i<u; i++) cout << '-';
  cout << 'U';
  for (int i=u+1; i<f; i++) cout << 'C';
  cout << 'F';
  for (int i=f+1; i<s.length(); i++) cout << '-';
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}