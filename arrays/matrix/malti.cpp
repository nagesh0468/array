#include<iostream>
using namespace std;

int main(){
system("cls");

int a[30][30],b[30][30],c[30][30];
int i,j,p,q,r,k;
/*The number of columns of the 1st matrix must equal the number of rows of the 2nd matrix.
And the result will have the same number of rows as the 1st matrix, and the same number of columns as the 2nd matrix.


To multiply an *+++m×n+++* matrix by an ++n×p++ matrix, the ns must be the same,
and the result is an ++m×p+++ matrix.

matrix multiply rows cols*/

cout<<" matric  p value: ";
cin>>p;
cout<<" matric  q value: ";
cin>>q;
cout<<" matric  r value: ";
 cin>>r;

   
cout<<"enter matrix a:";
for(i=0;i<p;i++){
  for(j=0;j<q;j++)
    cin>>a[i][j];
    }
   
    cout<<"enter matrix b:";
    for(i=0;i<q;i++){
  for(j=0;j<r;j++)
    cin>>b[i][j];
    }
 for(i=0;i<p;i++){
  for(j=0;j<r;j++){
    c[i][j]=0;
    for(k=0;k<q;k++){
      c[i][j]+=a[i][k]*b[k][j];
    }
    }
    }



     cout<<"multi of matrix :\n";
for(i=0;i<p;i++){
  for(j=0;j<r;j++){
    cout<<c[i][j]<<"    ";
  }
  cout<<endl;
}

return 0;
}