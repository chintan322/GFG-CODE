#include<bits/stdc++.h>
using namespace std;

struct Pair{
    int min,max;
};

Pair getMinMax(vector<int> &a,int n){

    Pair ans;
    ans.min = INT_MAX;
    ans.max = INT_MIN;
    for(int i=0;i<n;i++){
        if(a[i]>ans.max){
            ans.max = a[i];
        }
        if(a[i]<ans.min){
            ans.min = a[i];
        }
    }
    return ans;
}

int main(){

    int n;
    cin>>n;

    vector<int> a(n);
    for(auto &i: a){
        cin>>i;
    }

    Pair ans = getMinMax(a,n);
    cout<<"Min is : "<<ans.min<<" Max is : "<<ans.max<<endl;

    return 0;
}