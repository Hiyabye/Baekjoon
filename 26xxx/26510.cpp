#include <iostream>
using namespace std;

void solve(int n) {
  for (int i=0; i<n-1; i++) {
    for (int j=0; j<i; j++) cout << " ";
    cout << "*";
    for (int j=0; j<2*(n-i-1)-1; j++) cout << " ";
    cout << "*\n";
  }
  for (int i=0; i<n-1; i++) cout << " ";
  cout << "*\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  while (cin >> n) solve(n);
  return 0;
}