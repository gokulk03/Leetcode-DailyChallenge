#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums;
    int n;
    cin >> n;
    nums.resize(n); // Resize the nums vector to allocate memory for n elements

    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }
    
    vector<int> positive_nums;
    vector<int> negative_nums;
    for(int i = 0; i < n; i++){
        if(nums[i] > 0){
            positive_nums.push_back(nums[i]);
        }else{
            negative_nums.push_back(nums[i]);
        }
    }

    int x = 0;
    int z = 0;
    int i = 0;
    while(x < positive_nums.size() && z < negative_nums.size()){
        nums[i] = positive_nums[x];
        x++;
        i++;
        nums[i] = negative_nums[z];
        z++;
        i++;   
    }

    for(int i = 0; i < n; i++){
        cout << nums[i] << " ";
    }
    cout << endl; // Print a newline character at the end of the output
    return 0; // Add a return statement to indicate successful termination of the program
}

        
  