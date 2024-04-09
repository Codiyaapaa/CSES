#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;
    cin>>n;
    long long int sum1 = 0;
    vector<long long> arr(n);
    for(int i=0;i<n-1; i++){
        cin>>arr[i];
        sum1+=arr[i];
    }
    long long int sum = static_cast<long long>(n) * (n + 1) / 2;;
    cout<<(sum-sum1);

}