//count distinct in every window of size k

#include<iostream>
#include <vector>
#include<unordered_set>
using namespace std;

int main(){
    int arr[7] = { 1 , 2, 1 , 3 , 4 , 2, 3 };
    int k = 4 ;
    
    vector<int> res ;
    for( int i=0 ; i<= 7-4 ; i++){
        
        unordered_set<int> st;
        for(int j=i ; j<i+k ; j++){
            st.insert(arr[j]);
        }
        
        res.push_back(st.size());
    }
    
    for(int i=0 ;i<res.size() ; i++){
        cout << res[i] ;
    }
}

//  Input: arr[] = [1, 2, 1, 3, 4, 2, 3], k = 4
//  Output: [3, 4, 4, 3]
