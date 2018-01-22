/*
Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


int binarySearch(int arr[], int low, int high)
{
      //add code here.
      int m;
      int ans=-1;
      while(low<=high)
      {
          m=low+(high-low)/2;
          if(arr[m]<m)
          {
              low=m+1;
          }else if(arr[m]>m)
          {   
              high=m-1;
          }else
          {
              high=m-1;
              ans=m;
          }
      }
      return ans;
}