#include<iostream>
using namespace std;

int main(){
    int arr[7] = { 2 , 5 , -1 , 7 , -3 , -1 , 2};
    int k = 4 , sum = 0;
    
    for( int i=0 ; i<= 7-4 ; i++){
        int x = arr[i];
        int y = arr[i];
        
        for(int j=i ; j<i+k ; j++){
            if( arr[j] > x ) {
                x = arr[j];
            }                              //slide window and min , max 
            if ( arr[j] < y){
                y = arr[j];
            }
        }
        sum += x + y ;
        //cout << "x" << " " << x << "y" << " " << y << " " << sum << endl ;
    }
    cout << sum ;
    return 0;
}