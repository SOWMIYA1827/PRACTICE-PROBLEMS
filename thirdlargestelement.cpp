#include<bits/stdc++.h>
using namespace std ;

int main(){
    
    int num ;
    cin >> num ;  // size of the array
    
    int arr[num] ;  //declaration of array
    
    for(int i=0  ; i<num ; i++){
        cin >> arr[i] ;                 //get input of the array
    }
    
    int first = INT_MIN , second = INT_MIN ;
    for (int i=0 ;i<num ; i++){
        if ( arr[i] > first){
            second = first;
            first = arr[i] ;
        }                                   //calculate second largest element
        else if (arr[i] > second && arr[i] != first){
            second = arr[i];
        }
    }
    
    sort(arr,arr+num);
    int x = INT_MIN;
    for (int i=0 ;i<num ; i++){
        if (arr[i] < second){
            x = arr[i] ;
        }
    }
    
    cout << x << endl; //print third largest element
    return 0;
}