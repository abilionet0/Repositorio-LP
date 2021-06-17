#include <iostream>
using namespace std;

int soma_vizinhos (int n, int m){
  int tmp = 0;
    if(m > 0){
    for(int i=0; i<m; i++){
      tmp += n;
      n++;
    }
  return tmp;
  }else if(m < 0){
    for(int i=0; i>m; i--){
      tmp += n;
      n--;
  }
  return tmp;
  }else{
    return n;
  }
}

int main(){
  int n, m;
  cin >> n >> m;
  cout << soma_vizinhos(n,m) << endl;
}