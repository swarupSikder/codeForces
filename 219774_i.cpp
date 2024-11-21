//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;

void body(){
    //-----------------//
    //      input      //
    //-----------------//
    int n;
    cin>> n;

    int a[n];
    for(int i=0; i<n ;i++){
        cin>> a[i];
    }


    //------------------//
    //      process     //
    //------------------//
    // Initialize the smallest possible result to a large value
    int smallest_result= INT_MAX;

    // Variable to keep track of the smallest (A[i] - i) seen so far
    int min_ai_minus_i= INT_MAX;

    for(int j= 0; j<n ;j++){

        //For each j > 0, calculate the result using the smallest A[i] - i so far
        if(j>0){
            smallest_result= min(smallest_result, a[j]+j+ min_ai_minus_i);
        }

        //Update the smallest A[i] - i for future iterations
        min_ai_minus_i= min(min_ai_minus_i, a[j]-j);
    }

    //-----------------//
    //      output     //
    //-----------------//
    cout << smallest_result << endl;
}

int main(){
    int t;
    cin>> t;
    while(t--){
        body();
    }
    
    return 0;
}