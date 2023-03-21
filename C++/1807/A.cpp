#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main(){
    int t,a,b,c;
    cin >> t;
    for(int i = 0;i< t;i++){
        cin >> a >> b >> c;
        if(a+b == c) printf("+\n");
        if(a-b == c) printf("-\n");
    }
}
