// A monotonic stack is a stack whose elements are monotonically increasing or descreasing.

// Sometimes we store the index of the elements in the stack and make sure the elements corresponding to those indexes in the stack forms a mono-sequence.

// O(N)
// OJ: https://leetcode.com/problems/largest-rectangle-in-histogram/
// Time: O(N)
// Space: O(N)
// class Solution {
// public:
//     int largestRectangleArea(vector<int>& A) {
//         A.push_back(0); // append a zero at the end so that we can pop all elements from the stack and calculate the corresponding areas
//         int N = A.size(), ans = 0;
//         stack<int> s; // strictly-increasing mono-stack
//         for (int i = 0; i < N; ++i) {
//             while (s.size() && A[i] <= A[s.top()]) { // Take `A[i]` as the right edge
//                 int height = A[s.top()]; // Take the popped element as the height
//                 s.pop();
//                 int left = s.size() ? s.top() : -1; // Take the element left on the stack as the left edge
//                 ans = max(ans, (i - left - 1) * height);
//             }
//             s.push(i);
//         }
//         return ans;
//     }
// };

// Questions
// https://leetcode.com/problems/create-maximum-number/description/
// https://leetcode.com/problems/find-the-most-competitive-subsequence/
// https://codeforces.com/contest/1092/problem/D2 2200


// Rss
// https://liuzhenglaichn.gitbook.io/algorithm/monotonic-stack
