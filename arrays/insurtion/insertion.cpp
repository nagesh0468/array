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
    cout<<"enter num: ";
    cin>>num;
    if(p<1||p>n+1){
      cout<<" invalid position: ";
    }
    else{
      for(i=n-1;i>=p-1;i--){
        a[i+1]=a[i];
        
      }
      a[p-1]=num;
      n+1;
      
    }
     for(i=0;i<=n;i++){
      cout<<a[i]<<" ";
    }
  }
  
 return 0;
}
/*  insertion at bigning
      for(i=n-1;i>=0;i--){
        a[i+1]=a[i];
        
      }insertion at end;
      a[0]=num;
      n+1;  
        
         */
        /*
        a[n]=num;
        */