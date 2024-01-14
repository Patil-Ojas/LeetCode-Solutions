class Solution {
public:

    int get_mask(int num)
    {
        int mask = 0;

        while (num != 0)
        {
            mask = (mask<<1) | 1;
            num = num>>1;
        }
        // cout<<mask<<'\n';
        // cout<<num<<'\n';
        return mask;
    }

    int get_mask1(int num)
    {
        int i = 0;

        while (num != 0)
        {
            i = i + 1;
            num = num>>1;
        }

        int mask = pow(2, i) - 1;
        // cout<<mask<<'\n';
        return mask;
    }

    int bitwiseComplement(int n) {
        
        if (n==0)
        {
            return 1;
        }
        else
        {
            int comp = ~n;
            int bin_mask = get_mask1(n);
            int ans = comp & bin_mask;
            return ans;
        }
    }
};