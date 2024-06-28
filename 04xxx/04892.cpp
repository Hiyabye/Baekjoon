#include <iostream>
using namespace std;

bool solve(int idx) {
  int n0;
  cin >> n0;
  if (n0 == 0) return false;

  int n1 = n0*3;
  int n2 = n1 % 2 == 0 ? n1/2 : (n1+1)/2;
  int n3 = n2*3;
  int n4 = n3/9;
  
  if (n1 % 2 == 0) cout << idx << ". even " << n4 << "\n";
  else cout << idx << ". odd " << n4 << "\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int idx = 1;
  while (solve(idx++));
  return 0;
}