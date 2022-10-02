// time complexity : O(n) 
// space complexity : O(1)
// xor based approach

vector<int> findRepeatingAndMissingNumbers(vector<int> arr)
{
    int xorr=0;
    int n=arr.size();
    for(int i=0;i<n;i++)
    {
        xorr^=arr[i];
        xorr^=(i+1);
    }
    int right_most_set_bit = xorr&(~(xorr-1));
    int x=0,y=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]&right_most_set_bit)
        {
            x^=arr[i];
        }
        else
        {
            y^=arr[i];
        }
        if((i+1)&right_most_set_bit)
        {
            x^=(i+1);
        }
        else
        {
            y^=(i+1);
        }
    }
    int i=0;
    for(;i<n;i++)
    {
        if(x==arr[i])
        {
            break;
        }
    }
    int repeat,missing;
    if(i<n)
    {
        repeat=x;
        missing=y;
    }
    else
    {
        repeat=y;
        missing=x;
    }
    return {repeat,missing};
}
