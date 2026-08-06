1class Solution {
2public:
3    int digitproduct(int k,int t){
4        int res = 1;
5        while(k>0){
6            int rem = k%10;
7            res = res*rem;
8            k = k/10;
9            res = res%t;
10            
11        }
12        return res;
13    }
14    int smallestNumber(int n, int t) {
15        int original_digit = n;
16        if(digitproduct(n,t)==0){
17            return n;
18        }
19        else{
20            while(digitproduct(n,t)>0){
21                n++;
22            }
23        }
24        return n;
25          
26        
27    }
28};