#pragma GCC Optimize(2)
#include <iostream>
#include <algorithm>
#include <string>

void yurasnewname(){
    std::string s;
    std::cin>>s;
    int ans=0;
    bool flag=0;
    if(s=="^"){
        std::cout<<1<<std::endl;
        return;
    }
    for(char c : s){
        if(c=='^'){
            flag=1;
            continue;
        }
        else{
            if(flag==1){
                flag=0;
                continue;
            }
            else{
                ans++;
            }
        }
    }
    if(flag==0)ans++;
    std::cout<<ans<<std::endl;
}

int main(){
    int t;
    std::cin>>t;
    while(t--){
        yurasnewname();
    }
}