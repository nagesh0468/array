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
    cout<<"enter position: ";
    cin>>p;
    if(p<1||p>n+1){
      cout<<" invalid position: ";
    }
    else{
      for(i=p-1;i<n;i++){
        a[i]=a[i+1];
        
      }
    
     for(i=0;i<n-1;i++){
      cout<<a[i]<<" ";
   
    }
    }

  }
  
 return 0;
}