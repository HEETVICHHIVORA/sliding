#include<iostream>
#include<vector>
#include<climits>

using namespace std ;
int maxi =INT_MIN;
int mini= INT_MAX;
void findmm(vector<int> arr,int s,int e){
       if (s==e){
          mini = min(arr[s],mini);
          maxi = max(arr[s],maxi);
          return ;
       }
       int mid = (s+e)/2;
       findmm(arr,s,mid);
       findmm(arr,mid+1,e);
}
int main (){
    vector<int> arr = {10,9,8,7,6,5,4,3,2,1};
    int l =0 ;
    int r = arr.size()-1;
    findmm(arr,l,r);
    cout<<"minimum is :"<<mini;
    cout<<endl;
    cout<<"maximum is :"<<maxi;
    return 0 ;
}