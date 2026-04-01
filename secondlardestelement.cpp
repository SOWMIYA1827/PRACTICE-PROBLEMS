//Second Largest Element

#include<iostream>
#include<climits>
using namespace std ;

int main(){
    
    int num ;
    cin >> num; //size of the array
    
    int arr[num]; //Declaration of array
    for ( int i=0 ; i<num ; i++){
        cin >> arr[i] ; //Getting Array Values
    }
    
    int first = INT_MIN , second = INT_MIN ;
    for ( int i=0 ; i<num ; i++){
        if ( arr[i] > first ){ // if greater than first large then change first large
            second = first ;
            first = arr[i] ;
        }
        else if ( arr[i] > second and arr[i] != first){ // greateer than second largest elemet and not equal to first
            second = arr[i] ;
        }
    }
    
    cout << second << endl ; //return the second largest element
    return 0 ;
}