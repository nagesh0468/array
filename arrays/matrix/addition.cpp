#include<iostream>
using namespace std;

int main(){
system("cls");

int a[30][30],b[30][30];
int i,j,r,c;
cin>>r;
cin>>c;
cout<<"enter matrix a:";
for(i=0;i<r;i++){
  for(j=0;j<c;j++)
    cin>>a[i][j];
    }
    cout<<"enter matrix b:";
    for(i=0;i<r;i++){
  for(j=0;j<c;j++)
    cin>>b[i][j];
    }
     cout<<"sum of matrix :\n";
for(i=0;i<r;i++){
  for(j=0;j<c;j++){
    cout<<a[i][j]+b[i][j]<<"   ";
  }
  cout<<endl;
}
return 0;
}