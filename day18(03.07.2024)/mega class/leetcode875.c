class Solution {
public:

    bool calculate(vector<int>& piles, int k,int h)
    {
        long long int sum=0;
        for(int i=0;i<piles.size();i++)
        {
            sum+=ceil(piles[i] /(double) k);
        }
        return sum<=h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        
        int s=1,e=*max_element(piles.begin(),piles.end());
        int k=0;
        while(s<=e)
        {
            int mid=s+((e-s)>>1);
            if(calculate(piles,mid,h))
            {
                k=mid;
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        return k;
    }
};