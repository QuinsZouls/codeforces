#include<bits/stdc++.h>
using namespace std;
int n, days[101], dsc;
int main(){
  int gym = 0, write = 0;
  cin>>n;
  days[100] = -1;
  for(int i = 0; i< n; i++){
    cin>>days[i];
  }
  for(int i = 0; i < n; i++){

    switch(days[i]){
      case 0:
        dsc++;
        gym = 0;
        write = 0;
        break;
      case 1:
        if(write == 0){
           write++;
           gym = 0;
        } else {
          dsc++;
          gym = 0;
          write = 0;
        }
        break;
      case 2:
        if(gym == 0){
           gym++;
           write = 0;
        } else {
          dsc++;
          gym = 0;
          write = 0;
        }

        break;
      default:
        if(gym + write == 2) {
          dsc++;
          gym = 0;
          write = 0;
        }else {
          if(gym == 1){
            write++;
            gym = 0;
          }else if(write == 1){
            write = 0;
            gym++;
          }
        }
        break;
    }
  }
  cout<<dsc;
  return 0;
}