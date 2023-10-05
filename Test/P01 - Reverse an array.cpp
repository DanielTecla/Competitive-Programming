#include <vector>  
#include <algorithm>
#include <iostream>  


using namespace std;

int n,input;
vector<int> nums;

int main(){
    cin >> n;
    for (int i = 0; i<= n-1; i++){
        cin >> input;
        nums.push_back(input);
    }

    reverse(nums.begin(),nums.end());

    for (int i = 0; i <= n-1; i++)
        cout << nums[i] << " ";
}