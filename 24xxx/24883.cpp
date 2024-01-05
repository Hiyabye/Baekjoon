#include <iostream>
using namespace std;

void solve(void) {
  char c; cin >> c;
  
  cout << (c == 'N' || c == 'n' ? "Naver D2" : "Naver Whale");
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}