#include <iostream>
using namespace std;

void solve(void) {
  int k; cin >> k;

  for (int i=0; i<k; i++) cout << "1";
  for (int i=0; i<k-1; i++) cout << "0";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);

  solve();
  return 0;
}