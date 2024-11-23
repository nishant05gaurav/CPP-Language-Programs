// Reverse a vector:

#include <iostream>
#include <vector>
using namespace std;
void reverse_vec(vector<int> &vec)
{
    for (int val : vec)
    {
        auto start = vec.begin();
        auto end = vec.end() - 1;
        while (start < end)
        {
            swap(*start, *end);
            start++;
            end--;
        }
    }
    for (int val : vec)
    {
        cout << val << " ";
    }
}

int main()
{
    vector<int> vec = {1, 2, 3, 4, 5, 6, 7};
    reverse_vec(vec);
}
