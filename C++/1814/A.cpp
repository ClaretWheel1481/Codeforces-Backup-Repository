#pragma GCC optimize(2) //O2优化
#include <iostream>
#include <algorithm>

int main()
{
    int t;
    long long n,k;
    std::cin >> t;
    while(t--){
        std::cin >> n>>k;
        if((n-k)%2 ==0 || n%2 ==0) std::cout<<"YES"<<std::endl;
        else std::cout<<"NO"<<std::endl;
    }
}
