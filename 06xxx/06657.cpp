#include <bits/stdc++.h>
using namespace std;

typedef struct Team {
  string name; // team name
  int w, d, l, p; // win, draw, lose, point
  int gd, gs, ga; // goal difference, goal scored, goal against
  int idx; // index
} Team;

bool cmp(Team a, Team b) {
  if (a.p != b.p) return a.p > b.p;
  if (a.gd != b.gd) return a.gd > b.gd;
  if (a.gs != b.gs) return a.gs > b.gs;
  if (a.w != b.w) return a.w > b.w;
  return a.idx > b.idx;
}

int digits(int n) {
  if (n == 0) return 1;
  return (int)log10(n) + 1;
}

bool solve(void) {
  int n; cin >> n;
  if (n == 0) return false;
  vector<Team> t(n);

  vector<int> len(8, 0);
  len[0] = n >= 10 ? 2 : 1;
  map<string, int> mp;
  for (int i=0; i<n; i++) {
    cin >> t[i].name;
    t[i].w = t[i].d = t[i].l = t[i].p = 0;
    t[i].gd = t[i].gs = t[i].ga = 0;
    t[i].idx = i;
    mp[t[i].name] = i;
    len[1] = max(len[1], (int)t[i].name.length());
  }

  // result table structure
  vector<vector<char> > result(n*2+3, vector<char>(n*4+len[1]+2, ' '));
  for (int i=0; i<n*2+3; i++) {
    if (!(i & 1)) {
      result[i][0] = '+';
      for (int j=1; j<len[1]+1; j++) result[i][j] = '-';
      result[i][len[1]+1] = '+';
      for (int j=0; j<n; j++) {
        result[i][len[1]+2+j*4] = '-';
        result[i][len[1]+3+j*4] = '-';
        result[i][len[1]+4+j*4] = '-';
        result[i][len[1]+5+j*4] = '+';
      }
    } else {
      result[i][0] = '|';
      result[i][len[1]+1] = '|';
      for (int j=0; j<n; j++) {
        result[i][len[1]+5+j*4] = '|';
      }
    }
  }

  // fill result table
  for (int i=0; i<n; i++) {
    if (t[i].name.length() >= 1) result[1][len[1]+2+i*4] = t[i].name[0];
    if (t[i].name.length() >= 2) result[1][len[1]+3+i*4] = t[i].name[1];
    if (t[i].name.length() >= 3) result[1][len[1]+4+i*4] = t[i].name[2];
    for (int j=0; j<t[i].name.length(); j++) {
      result[i*2+3][j+1] = t[i].name[j];
    }
    result[i*2+3][len[1]+3+i*4] = 'X';
  }

  int m; cin >> m;
  while (m--) {
    // a, c: team name, b: temporary variable, d: score
    string a, b, c, d; cin >> a >> b >> c >> d;

    // update win, draw, lose
    if (d[0] > d[2]) { t[mp[a]].w++; t[mp[c]].l++; }
    else if (d[0] < d[2]) { t[mp[a]].l++; t[mp[c]].w++; }
    else { t[mp[a]].d++; t[mp[c]].d++; }

    // update goal scored, goal against
    t[mp[a]].gs += d[0]-'0'; t[mp[a]].ga += d[2]-'0';
    t[mp[c]].gs += d[2]-'0'; t[mp[c]].ga += d[0]-'0';

    // update result
    for (int i=0; i<3; i++) {
      result[mp[a]*2+3][len[1]+2+mp[c]*4+i] = d[i];
    }
  }

  // update point and goal difference
  for (int i=0; i<n; i++) {
    t[i].p = t[i].w * 3 + t[i].d;
    t[i].gd = t[i].gs - t[i].ga;
  }

  // update length
  for (int i=0; i<n; i++) {
    len[2] = max(len[2], digits(t[i].w + t[i].d + t[i].l));
    len[3] = max(len[3], digits(t[i].w));
    len[4] = max(len[4], digits(t[i].d));
    len[5] = max(len[5], digits(t[i].l));
    len[6] = max(len[6], digits(t[i].gs) + 1 + digits(t[i].ga));
    len[7] = max(len[7], digits(t[i].p));
  }

  // print result table
  cout << "RESULTS:\n";
  for (int i=0; i<n*2+3; i++) {
    for (int j=0; j<n*4+len[1]+2; j++) {
      cout << result[i][j];
    }
    cout << "\n";
  }
  cout << "\n";

  // sort
  sort(t.begin(), t.end(), cmp);

  // print standings
  cout << "STANDINGS\n";
  cout << "----------\n";
  for (int i=0; i<n; i++) {
    for (int j=0; j<len[0]-digits(i+1); j++) cout << " ";
    cout << i+1 << ". " << t[i].name;
    for (int j=0; j<len[1]-t[i].name.length()+1; j++) cout << " ";
    for (int j=0; j<len[2]-digits(t[i].w + t[i].d + t[i].l); j++) cout << " ";
    cout << t[i].w + t[i].d + t[i].l << " ";
    for (int j=0; j<len[3]-digits(t[i].w); j++) cout << " ";
    cout << t[i].w << " ";
    for (int j=0; j<len[4]-digits(t[i].d); j++) cout << " ";
    cout << t[i].d << " ";
    for (int j=0; j<len[5]-digits(t[i].l); j++) cout << " ";
    cout << t[i].l << " ";
    for (int j=0; j<len[6]-digits(t[i].gs)-1-digits(t[i].ga); j++) cout << " ";
    cout << t[i].gs << ":" << t[i].ga << " ";
    for (int j=0; j<len[7]-digits(t[i].p); j++) cout << " ";
    cout << t[i].p << "\n";
  }
  cout << "\n";
  
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  while (solve());
  return 0;
}