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
   
      for(i=n-1;i>=0;i--){
        a[i+1]=a[i];
        
      }
      a[0]=num;
      n+1;
      
    
     for(i=0;i<=n;i++){
      cout<<a[i]<<" ";
    }
  }
  
 return 0;
}
