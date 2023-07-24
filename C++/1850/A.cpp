#include <iostream>
#include <algorithm>
#include <vector>

void tmc(){
    std::vector<int> nums(3);
    for(int i = 0;i<3;i++){
        std::cin >> nums[i];
    }
    for(int i = 0;i<2;i++){
        for(int j = i+1;j<3;j++){
            if(nums[i]+nums[j] >= 10){
                std::cout << "YES"<< std::endl;
                return ;
            }
        }
    }
    std::cout << "NO" << std::endl;
    return ;
}

int main(){
    int t;
    std::cin >> t;
    while(t--)tmc();
    return 0;
}