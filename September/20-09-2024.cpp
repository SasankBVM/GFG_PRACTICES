class Solution {
  public:
    // Returns count buildings that can see sunlight
    int countBuildings(vector<int> &arr) {
        int ck=1;
        
        int maxi=arr[0];
        for(int i=1;i<arr.size();i++)
        {
            
            if(arr[i]>arr[i-1] && arr[i]>maxi) ck++;
            maxi=max(maxi,arr[i]);
        }
        return ck;
    }
};
