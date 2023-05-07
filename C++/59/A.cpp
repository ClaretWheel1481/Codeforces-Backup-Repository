    #include <bits/stdc++.h>
     
    using namespace std;
     
    int main(){
        int upperw = 0,lowerw = 0;
        string s;
        cin >> s;
        for(char c : s){
            if(islower(c)){
                lowerw++;
            }else if(isupper(c)){
                upperw++;
            }
        }
        if(upperw > lowerw){
            transform(s.begin(),s.end(),s.begin(),::toupper);
        }else if(lowerw >= upperw){
            transform(s.begin(),s.end(),s.begin(),::tolower);
        }
        cout << s << endl;
        return 0;
    }