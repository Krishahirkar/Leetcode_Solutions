1class Solution {
2public:
3    vector<int>gsl(){
4        vector<int>sqdigit;
5        for(int length=2;length<=9;length++){
6            for(int start=1;start<=10-length;start++){
7                int num = 0;
8                for(int i=0;i<length;i++){
9                    num = num*10+(start+i);
10                }
11                sqdigit.push_back(num);
12            }
13        }
14        return sqdigit;
15    }
16    vector<int> sequentialDigits(int low, int high) {
17      vector<int>result;
18      vector<int>constant = gsl();
19      for(int num:constant){
20        if(num>=low && num<=high){
21            result.push_back(num);
22        }
23      }  
24      return result;
25    }
26};