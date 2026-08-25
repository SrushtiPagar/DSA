#include <iostream>
using namespace std;

int main()
{
    int size;
    cin>>size;
    int nums[size];
    for(int i=0 ; i<size ; i++)
    {
        cin>>nums[i];
    }
    int target;
    cin>>target;

    for(int i=0 ; i<size; i++)
    {
        for(int j=i+1 ; j<size ; j++)
        {
            if(nums[i] + nums[j] == target)
            {
                cout<<"["<<i<<","<<j<<"]";
            }
        }
    }
    
}
