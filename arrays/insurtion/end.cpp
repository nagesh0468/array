#include<iostream>
using namespace std;

int main(){
  system("cls");
  int a[30];
  int n,i,p,num;
  cout<<"enter n value: ";
  cin>>n;
  if(n>30){
    cout<<"out of boundary: ";
  }
  else{
     cout<<" enter array elements: ";
    for(i=0;i<n;i++){
      cin>>a[i];
    }
    
    cout<<"enter num: ";
    cin>>num;
      
      a[n]=num;
      
      
    
     for(i=0;i<=n;i++){
      cout<<a[i]<<" ";
    
  }
  }
  
 return 0;
}
