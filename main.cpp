#include <iostream>
using namespace std;
int squareRoot(int n){
  int s=0;
  int e=n;
  int ans=0;
  int mid=s+(e-s)/2;
  while(s<=e){
    if(mid*mid==n){
      ans=mid;
      break;
    }
    if(mid*mid>n){
      e=mid-1;
    }
    else{
      ans=mid;
      s=mid+1;
    }
    mid=s+(e-s)/2;
  }
  return ans;
}
 long double precision(int n,int prec,int tempSol){
 long double ans=tempSol;
  long double factor=1;
  for (long double i=0;i<prec;i++){
    factor/=10;
    for(long double j=ans;j*j<n;j=j+factor){
      ans=j;
    }
  }
  return ans;
}
int main() {
  int n;
  cout<<"Enter the no:";
  cin>>n;
  cout<<endl;
  int ans=squareRoot(n);
  cout<<"Square root of the number is "<<ans<<endl;
 long double p=precision(n,6,ans);
  cout<<"Square root of the number with precision is "<<p<<endl;
}