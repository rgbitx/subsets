#include <iostream>
#include <vector>

using namespace std;

void helper(vector<vector<int>> &results, vector<int> &subset, vector<int> &nums, int start){

    results.push_back(subset);

    for (int i = start; i<nums.size(); i++){
        subset.push_back(nums[i]);
        helper(results,subset,nums,i+1);
        subset.pop_back();
    }

}



int main() {
    cout << "Hello, World!" << endl;

    vector<vector<int>> results;
    vector<int> subset;
    vector<int> nums={1,2};

    helper(results,subset,nums,0);

    cout<<"First word: |"<<results[0][0]<<"|"<<endl;

    for(int i=0;i<results.size();i++){
        for(int j=0;j<results[i].size();j++){
            cout<<results[i][j]<<",";
        }
        cout<<endl;
    }



    return 0;
}