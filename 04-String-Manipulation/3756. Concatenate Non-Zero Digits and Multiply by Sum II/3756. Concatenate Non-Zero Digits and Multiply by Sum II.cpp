1class Solution {
2public:
3    vector<int> sumAndMultiply(string s, vector<vector<int>>& queries) {
4        vector<int>ans;
5        long long mod=1e9+7;
6
7        int n = s.size();
8        //i precomputed the powers to help me in further extraction of the desired number from its prefix. i didnt use pow() function because its slow.
9        vector<long long> power(n + 1);
10        power[0] = 1;
11        for (int i=1;i<=n;i++) {
12        power[i] = (power[i-1]*10) % mod;
13        }
14
15
16        //precomputed the numbers and their sums for each index.
17        vector<long long>prefix;
18        vector<pair<long long,int>>Numbers;
19        long long sum=0;
20        long long num=0;
21        int count=0;
22        for( int i=0;i<s.size();i++)
23        {
24            if(s[i] !='0')
25            {
26                num=((1LL*num*10)%mod+(s[i]-'0'))%mod;
27                count++;
28            }
29            sum+=(s[i]-'0')%mod;
30            prefix.push_back(sum);
31            Numbers.push_back({num,count});
32        }
33        for( int i=0; i<queries.size();i++)
34        {
35            int start=queries[i][0];
36            int end=queries[i][1];
37            int finalNum;
38            int requiredSum=0;
39            //if the number doesnt start from the very first index , it means it would require some cutting from its front.
40
41
42            if( start > 0 )
43            {
44                // this length is computed by the idea-- what was required length and what was its actual length since it takes all the number from the start.
45               int len =  Numbers[end].second - Numbers[start-1].second;
46               long long toMinus = (1LL * Numbers[start - 1].first * power[len]) % mod;
47               finalNum = (Numbers[end].first - toMinus + mod ) % mod;  
48
49                int totalSum= prefix[end];
50                requiredSum = prefix[end] - prefix[start-1]; 
51            }
52            else
53            {
54                finalNum=Numbers[end].first;
55                requiredSum= prefix[end];
56            }
57            int val = (1LL*finalNum*requiredSum)%mod;
58            ans.push_back( val);
59        }
60        return ans;
61        
62    }
63};