class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> a;
        for(int i=0;i<arr2.size();i++){
            for(int j=0;j<arr1.size();j++){
                if(arr1[j]==arr2[i]){
                    a.push_back(arr1[j]);
                }
            }
        }
        int n=a.size();
        for (int element : arr1) {
            if (std::find(arr2.begin(), arr2.end(), element) == arr2.end()) {
                a.push_back(element);
            }
        }
        std::sort(a.begin()+n,a.end());
        return a;       
    }
};
