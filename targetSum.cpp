#include<bits/stdc++.h>
using namespace std;

void targetSum(){

    
    int nums[2]={3,3};
    int target=6;
    for(int i=0;i<2;i++){
        int first_number=nums[i];
        for(int j=i+1;j<2;j++){
            if(nums[j]==target-first_number){
                cout<<i <<" "<<j;
                // return {first_number, nums[j]};
            }
        }
    }
    
}
int main(){
    
    // int target=9;
    // vector<int> ans=targetSum(nums,target);
    targetSum();
    // cout<<ans[0]<<" "<<ans[1]<<endl;

}