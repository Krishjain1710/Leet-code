class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        if(digits[n-1]!=9)
        {
            digits[n-1]++;
            return digits;
        }
        else{
            digits[n-1]=0;
            if(n==1)
            {
                digits.insert(digits.begin(),1);

            }
            else{

            for(int i=n-2;i>=0;i--)
            {
                if(digits[i]!=9)
                {
                    digits[i]++;
                    return digits;
                }
                else{
                    digits[i]=0;
                    
                }
                
            }
            digits.insert(digits.begin(),1);
            }
        }
        return digits;
        
    }
};
