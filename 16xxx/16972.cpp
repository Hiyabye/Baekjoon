#include <iostream>
using namespace std;

void solve(void) {
  cout << "-1 -1\n";
  for (int i=0; i<813; i++) {
    cout << 10*i << " " << 10*i << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);

  solve();
  return 0;
}