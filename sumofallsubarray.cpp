#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr[6] = {1,2,3,4,5,6};
    int k = 3 ;
    vector<int>nums;
    for(int i=0 ; i<=6-3 ; i++){
        int sum = 0 ;
        for(int j=i ; j<i+k ; j++){
            sum += arr[j];
        }
        nums.push_back(sum);
    }
    
    for(int i=0 ; i<nums.size() ; i++){
        cout << nums[i] << " ";
    }
    return 0;
}


//Input: arr[] = {1, 2, 3, 4, 5, 6}, K = 3 
//Output: 6 9 12 15 