#include<iostream>
using namespace std;

int main(){
system("cls");
int a[30][30];
int i,j,r,c;
cin>>r;
cin>>c;
for(i=0;i<r;i++){
  for(j=0;j<c;j++)
    cin>>a[i][j];
    }
for(i=0;i<r;i++){
  for(j=0;j<c;j++){
    cout<<a[i][j]<<"   ";
  }
  cout<<endl;
}
return 0;
}