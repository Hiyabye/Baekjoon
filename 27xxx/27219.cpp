#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;
  
  for (int i=0; i<n/5; i++) cout << "V";
  for (int i=0; i<n%5; i++) cout << "I";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}