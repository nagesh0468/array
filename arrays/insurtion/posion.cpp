#include<iostream>
using namespace std;

int main(){
  system("cls");
  int a[]={1,2,3,4,5,6},i,p,num;
  int n=sizeof(a)/sizeof(int);
  for(i=0;i<n;i++)
  cout<<a[i]<<"\t";
  cout<<endl;
  cout<<n<<"\n";
  cout<<"enter position ";
  cin>>p;
  cout<<"enter num ";
  cin>>num;
  if(p<1 || p>n+1)
     cout<<"invalid position ";
     else{
      for(i=n;i>=p-1;i--){
      a[i+1]=a[i];
      }
      a[p-1]=num;
       
      for(i=0;i<=n;i++)
       cout<<a[i]<<"\t";

     }
     cout<<endl;
        n=sizeof(a)/sizeof(int);
        cout<<n;

  return 0;

  

}
