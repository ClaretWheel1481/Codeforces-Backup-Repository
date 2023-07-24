#include <iostream>
#include <algorithm>
#include <vector>

void twow(){
    int numlength,maxlevel = 0,maxnum = 0;
    std::cin >> numlength;
    std::vector<int> nums1(numlength);
    std::vector<int> nums2(numlength);
    for(int i = 0;i<numlength;i++){
        std::cin >> nums1[i] >> nums2[i];
        if(nums1[i]<=10){
            if(nums2[i]>maxlevel){
                maxlevel = nums2[i];
                maxnum = i+1;
            }
        }
    }
    std::cout << maxnum << std::endl;
}

int main(){
    int t;
    std::cin >> t;
    while(t--)twow();
    return 0;
}