#include<bits/stdc++.h>
using namespace std;
int a,b, n;
int bsMax(int min, int max){
  int inicio = max, fin = min, mitad = 0, res = - 1;
  while(inicio >= fin){
    mitad = (inicio + fin ) / 2;
    if(a%mitad == 0 && b%mitad == 0){
      res = mitad;
      inicio = mitad - 1;
    } else {
      fin = mitad + 1;
    }
  }
  return res;
}
int bsMin(int min, int max){
  int inicio = min, fin = max, mitad = 0, res = -1;
  while(inicio <= fin){
    mitad = (inicio + fin ) / 2;
    if(a%mitad == 0 && b%mitad == 0){
      res = mitad;
      inicio = mitad + 1;
    } else {

      fin = mitad - 1;
    }
  }
  return res;
}

int main(){
  cin.tie(0);
  ios_base::sync_with_stdio(0);
  cin>>a>>b;
  cin>>n;
  for(int i = 0; i< n; i++){
    int min, max;
    cin>>min>>max;
    int resMin = bsMin(min, max), resMax = bsMax(min, max);
    if(resMin < resMax){
      cout<<resMax<<endl;
    } else {
      cout<<resMin<<endl;
    }
  }
  return 0;
}