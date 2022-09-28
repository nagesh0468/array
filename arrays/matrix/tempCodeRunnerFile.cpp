#include<iostream>
using namespace std;

int main(){
  system("cls");
  int a[100],n,k,i,sum=0,miss;
  cout<<" enter n value : ";
  cin>>n;

  k= (n*(n+1))/2;
  cout<<"enter numbers: ";
  for(i=0;i<n-1;i++){
    cin>>a[i];
    sum+=a[i];
    cout<<a[i]<<"\t";
  }
  cout<<endl;
  miss=k-sum;
  cout<<"missing numbers is: "<<miss;


return 0;

}
