#include <iostream>
using namespace std;

void solve(void) {
  int h; cin >> h;

  for (int i=1; i<=h; i+=2) {
    for (int j=0; j<i; j++) cout << "*";
    for (int j=i; j<2*h-i; j++) cout << " ";
    for (int j=2*h-i; j<2*h; j++) cout << "*";
    cout << "\n";
  }
  for (int i=h-2; i>=1; i-=2) {
    for (int j=0; j<i; j++) cout << "*";
    for (int j=i; j<2*h-i; j++) cout << " ";
    for (int j=2*h-i; j<2*h; j++) cout << "*";
    cout << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}