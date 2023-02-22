#include <iostream>

using namespace std;

int main(){
    int ch, n, lengs, i ,j;
    scanf("%d\n",&n);
    for(i = 0;i< n;i++){
        j=0;
        scanf("%d\n",&lengs);
        while((ch = getchar()) != '\n'){
            if(j < ch - 'a' +1){
                j = ch - 'a'+1;
            }
        }
        printf("%d\n",j);
    }
    return 0;
}
