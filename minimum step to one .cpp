 #include<climits>
int ans(int n,vector<int>&arr){
    if(n==1){
        return 0;
    }
    if(arr[n]>0){
        return arr[n];
    }
    int a= ans(n-1,arr);
    int b=INT_MAX;
    if(n%2==0){
        b=ans(n/2,arr);
    }
    int c=INT_MAX;
    if(n%3==0){
        c=ans(n/3,arr);
    }
    arr[n]= min(a,min(b,c))+1;
    return min(a,min(b,c))+1;
}
int countStepsToOne(int n) {
    vector<int>arr(n+1,0);
    int aa= ans(n,arr);
    
    return aa;
}
