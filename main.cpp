#include <bits/stdc++.h>
using namespace std;

int main() {


    //Taking input
    int n;
    cin >> n;
    vector <int> v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }




    //Finding max value
    int maximum = *max_element(v.begin(),v.end());
    cout << maximum<<endl;



    // Assuming all elements to be >= 0
    vector <int> counta(maximum+1,0);
    for(int i=0;i<n;i++){
        counta[v[i]]++;
    }




    //Printing the Sorted array
    for(int i=0;i<maximum+1;i++){
        for(int j=0;j<counta[i];j++){
            cout << i << " ";
        }
    }
}
