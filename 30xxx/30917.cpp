#include <iostream>
using namespace std;

void solve(void) {
  int a = 1;
  while (true){
    cout << "? A " << a << endl;
    int resp; cin >> resp;
    if (resp == 1) break;
    a++;
  }

  int b = 1;
  while (true){
    cout << "? B " << b << endl;
    int resp; cin >> resp;
    if (resp == 1) break;
    b++;
  }

  cout << "! " << a + b << endl;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}