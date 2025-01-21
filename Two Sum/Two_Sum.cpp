#include<iostream>
#include<vector>
#include<sstream>
using namespace std;

class Two_Sum
{
    public:
        vector<int> Process_Data(vector<int>& nums, int target)
        {
            vector<int> result;
            for(int i = 0; i < nums.size(); i++)
            {
                for(int j = i + 1; j < nums.size(); j++)
                {
                    if(nums[i] + nums[j] == target)
                    {
                        result.push_back(i);
                        result.push_back(j);
                        return result;
                    }
                }
            }
            return result;
        }
};

int main()
{
    Two_Sum object;

    cout << "Enter a list of integers separated by spaces: ";
    string input;
    getline(cin, input);
    stringstream ss(input);
    vector<int> nums;
    int number;
    while (ss >> number)
    {
        nums.push_back(number);
    }

    cout << "Enter the target value: ";
    int target;
    cin >> target;

    vector<int> result = object.Process_Data(nums, target);

    if(!result.empty())
    {
        cout << "Indices of two numbers that add up to " << target << " are " << result[0] << " and " << result[1] << endl;
    }
    else
    {
        cout << "No two numbers in the vector add up to " << target << endl;
    }

    return 0;
}