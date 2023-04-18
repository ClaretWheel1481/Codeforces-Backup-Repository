    #pragma GCC optimize(2) //O2优化
    #include <iostream>
    #include <algorithm>
     
    int main(){
        int t;
        std::cin>>t;
        while(t--){
            int n;
            std::cin>>n;
            int boolean = 0;
            for(int i = 1;i<=n;++i){
                int num;
                std::cin >> num;
                if(num<=i)boolean = 1;
            }
            std::cout<<(boolean?"YES":"NO")<<std::endl;
        }
    }