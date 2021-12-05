// solution for leetcode - I don't know yet how to connert it for local using main method

// class Solution
// {
// public:
//     void findCombination(int index, int target, vector<int> &arr, vector<vector<int>> &ans, vector<int> &ds)
//     {
//         if (index == arr.size())
//         {
//             if (target == 0)
//             {
//                 ans.push_back(ds);
//                 return;
//             }
//         }

//         // picking element
//         if (arr[0] <= target)
//         {
//             ds.push_back(arr[0]);
//             findCombination(index, target - arr[0], arr, ans, ds);
//             ds.pop_back();
//         }
//         // not picking element

//         findCombination(index + 1, target, arr, ans, ds);
//     }

// public:
//     vector<vector<int>> combinationSum(vector<int> &candidates, int target)
//     {
//         vector<vector<int>> ans;
//         vector<int> ds;
//         findCombination(0, target, candidates, ans, ds);

//         return ans;
//     }
// };