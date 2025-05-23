#include <bits/stdc++.h>
using namespace std;
int main(){
    int coin25 = 0,coin50=0,x,n;
    cin >> n;
    for(int I=0;I<n;I++){
        cin >> x;
        if(x == 25) {coin25++;continue;}
        else if (x == 50){
            if(coin25 < 0){cout <<"NO";return 0;}
            else {coin25--;coin50++;}
        }
        else {
            if (coin25 < 0){cout<<"NO";return 0;}
            else if((coin50 > 0)&&(coin25 > 0)){coin25--;coin50--;}
            else if((coin50 == 0)&&(coin25 > 3)){coin25 = coin25 - 3;}
        }
    }
    cout << "YES";
    return 0;
}

