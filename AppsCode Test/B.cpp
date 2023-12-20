// Answer of problem 2
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

class Tweet{
public:
    string username;
    ll followers;
    string tweet_content;
    char hashtag = ' ';
    ll valueOfTweetContent=0;
    void calculateValueOfTweetConent(){
        ll sz=unique(tweet_content.begin(),tweet_content.end())-tweet_content.begin();
        valueOfTweetContent = sz;
    }
};

bool compareTweet(Tweet a, Tweet b)
{
    if(a.hashtag=='#' && b.hashtag!='#') return true;
    if(a.hashtag!='#' && b.hashtag=='#') return false;
    if(a.valueOfTweetContent>b.valueOfTweetContent) return true;
    if(b.valueOfTweetContent > a.valueOfTweetContent) return false;
    if(a.followers > b.followers) return true;
    if(b.followers > a.followers) return false;
    if(a.username > b.username) return true;
    if(b.username > a.username) return false;
}

int main()
{

    string input;
    vector<Tweet> v;
    while(getline(cin>>ws,input)){
        ll i;
        string username,tweet_content;
        int followers;
        string followers_stringform;
        char hashtag=' ';
        for(i=0; input[i]!=' '; i++) username.push_back(input[i]);
        for(i=i+1; input[i]!=' '; i++) followers_stringform.push_back(input[i]);
        followers = stoll(followers_stringform);
        for(i=i+1; input[i]!='>'; i++) tweet_content.push_back(input[i]);
        for(i=i+1; i<input.size(); i++){
            if(input[i]=='#') hashtag = input[i];
        }
        Tweet tweet;
        tweet.username = username;
        tweet.followers = followers;
        tweet.tweet_content = tweet_content;
        tweet.hashtag = hashtag;
        tweet.calculateValueOfTweetConent();
        v.push_back(tweet);
    }
    sort(v.begin(),v.end(), compareTweet);
    for(auto tweet:v){
        cout << tweet.username << " " << tweet.followers << endl;
    }
    return 0;
}
