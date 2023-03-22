#pragma GCC optimize(2)
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void panduan(vector<int> nums){
    int Mihai = 0,Bianca = 0;
    for(int i : nums){
        if(i % 2 == 0)Mihai+=i;
        else Bianca+=i;
    }
    if(Mihai>Bianca)printf("YES\n");
    else printf("NO\n");
}

int main(){
    int t;
    cin >> t;
    for(int i = 0;i< t;i++){
        int n;
        cin >> n;
        vector<int> nums;
        nums.resize(n);
        for(int j = 0;j<n;j++){
            cin >> nums[j];
        }
        panduan(nums);
    }
}
