1class Solution {
2public:
3    vector<int> arrayRankTransform(vector<int>& arr) {
4        map<int,int> mpp;
5        int r  = 1;
6        vector<int>temp = arr;
7        sort(temp.begin(),temp.end());
8        for(int x:temp){
9            if(mpp.find(x)==mpp.end()){
10                mpp[x] = r++; //x is key and r is value
11            }
12        }
13        vector<int>res;
14        for(int x:arr){
15            res.push_back(mpp[x]); // so this will give the value and the value will be pushed to result vector mpp[x] gives the value and x is just a key
16        }
17        return res;
18    }
19};