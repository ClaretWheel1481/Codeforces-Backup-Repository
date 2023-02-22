#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int i, j, n;
    int nums[3];
    cin >> n;
    for(i = 0;i<n;i++){
        for(j = 0;j<3;j++){
            cin >> nums[j];
        }
        sort(nums,nums+3);
        printf("%d\n",nums[1]);
    }
    return 0;
}
