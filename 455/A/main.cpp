#include <bits/stdc++.h>
using namespace std;
typedef long long int I64d ;
I64d  n, number[100005], bk[100005], res[100005];


int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> number[i];
    bk[number[i]]++;
  }
  res[0] = 0;
  res[1] = bk[1];
  for (int i = 2; i < 100001; i++) {
    res[i] = max(res[i - 1], res[i - 2] + i * bk[i]);
  }
  cout << res[100000];
  return(0);
}