class Solution {
public:
    typedef pair<int,int> pi;
    int findTheCity(int n, vector<vector<int>>& e, int d) {
        vector<pair<int,int>>a[n];
        for(int i=0;i<e.size();i++){
            a[e[i][0]].push_back({e[i][1],e[i][2]});
            a[e[i][1]].push_back({e[i][0],e[i][2]});
        }
        int h=0;
        int an;
      for(int i=0;i<n;i++){
          vector<int>dis(n,INT_MAX);
          dis[i]=0;
          priority_queue<pi, vector<pi>, greater<pi> > q;
          q.push({0,i});
          while(q.size()){
              int x=q.top().first;
              int dd=q.top().second;
              q.pop();
              for(auto k : a[dd]){
                  if(dis[k.first]>k.second+x){
                      dis[k.first]=k.second+x;
                      q.push({k.second+x,k.first});
                  }
              }
          }
          int c=0;
         for(int j=0;j<n;j++){
             if(i!=j){
                 if(dis[j]>d)c++;
             }
         }
          if(h<=c){
              h=c;
              an=i;
          }
          
      }
        return an;
    }
};
