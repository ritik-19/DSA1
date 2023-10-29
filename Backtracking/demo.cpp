#include<iostream>
#include<cmath>
using namespace std;
int fun(int *arr,int n){
  int first=0;
  if(n==0) return first;
  int second=abs(arr[0]-arr[1]);
  if(n==1) return second;
  int sum=0;
 for(int i=2;i<n;i++){
 	sum=min(first+abs(arr[i]-arr[i-2]),second+abs(arr[i]-arr[i-1]));
 	first=second;
 	second=sum;
 }
 return sum;
}
int main(){
  int n;
  cin>>n;
  int *arr=new int[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  cout<<fun(arr,n)<<endl;
  return 0;
}