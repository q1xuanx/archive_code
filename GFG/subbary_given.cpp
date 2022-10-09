class Solution
{
public:
    // Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        int start = 0, end = 0;
        int sum = 0;
        vector<int> ans;
        for (int i = 0; i < n; i++)
        {
            sum = arr[i];
            for (int j = i + 1; j <= n; j++)
            {
                if (sum == s)
                {
                    ans.push_back(i + 1);
                    ans.push_back(i + 1);
                    return ans;
                }
                if (sum > s || j == n)
                    break;
                sum += arr[j];
                if (sum == s)
                {
                    ans.push_back(i + 1);
                    ans.push_back(j + 1);
                    return ans;
                }
            }
        }

        ans.push_back(-1);
        return ans;
    }
};
