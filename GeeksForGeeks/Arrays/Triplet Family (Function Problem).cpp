/*
Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


// function should return the triplet
// in a vector container defined as "vector<int> result"
// use result.push_back() to insert elements in the 
// container
// if no such triplet is found, 
// return the container result as empty
// Note: container should be contain 3 elements or 0 elements only.
vector<int> findTriplet(int arr[], int n)
{
    vector<int> result;
    if(n>=3)
    {
        sort(arr,arr+n);
        int i,j,x;
        for(i=n-1;i>=2;i--)
        {
            for(j=0,x=i-1;j<x;)
            {
                if(arr[i]==arr[j]+arr[x])
                {
                    result.push_back(arr[i]);
                    result.push_back(arr[x]);
                    result.push_back(arr[j]);
                    return result;
                }else if(arr[i]>arr[j]+arr[x])
                {
                    j++;
                }else x--;
                
            }
        }
    }
    // code here
    return result;
}