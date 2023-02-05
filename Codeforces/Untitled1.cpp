#include<bits/stdc++.h>
using namespace std;

vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        long long i;
        vector<int> vowel;
        vector<int> ans;
        for(i=0; i<words.size(); i++){
            int l = words[i].size()-1;
            if((words[i][0]=='a' || words[i][0]=='e' || words[i][0]=='i' || words[i][0]=='o' || words[i][0]=='u') && (words[i][l]=='a' || words[l][0]=='e' || words[l][0]=='i' || words[l][0]=='o' || words[l][0]=='u') ){
                if(i==0) vowel.push_back(1);
                else vowel.push_back(vowel[i-1]+1);
            }
            else{
                if(i==0) vowel.push_back(0);
                else vowel.push_back(vowel[i-1]);
            }
        }
        for(i=0; i<queries.size(); i++){
            int ls=queries[i][0], rs=queries[i][1], temp;
            ls--;
            if(ls==-1) temp = vowel[rs];
            else temp = vowel[rs]-vowel[ls];
            ans.push_back(temp);
        }

        return ans;
    }
int main()
{
    vector<string> words = {"aba","bcb","ece","aa","e"};
    vector<vector<int>> queries = {[0,2],[1,4],[1,1]};
    auto v= vowelString(words, queries);
    for(i=0; i<v.size(); i++) cout << v[i] << " ";
    cout << endl;
    return 0;
}
