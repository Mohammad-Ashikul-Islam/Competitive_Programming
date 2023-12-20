// Answer of problem C
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

class Version{
public:
    vector<string> features;

    void modify(string oldFeature, string newFeature){
        for(ll i=0; i<features.size(); i++){
            if(features[i]==oldFeature) features[i]=newFeature;
        }
    }

    bool hasFeature(string& searchedFeature){
        for(ll i=0; i<features.size(); i++){
            if(features[i]==searchedFeature) return true;
        }
        return false;
    }
};

int main()
{
    string input_string;
    getline(cin>>ws,input_string);
    vector<Version> versionStore;
    string s;
    Version version1;
    for(ll i=1; i< input_string.size()-1; i++){
        if(input_string[i] == ','){
            version1.features.push_back(s);
            s.clear();
            i++; // for escaping space after the comma
        }
        else{
            s.push_back(input_string[i]);
        }
    }
    version1.features.push_back(s);
    versionStore.push_back(version1);
    Version current_version;
    current_version = version1;

    string input;
    while(getline(cin>>ws,input)){
        if(input.find("Add") != string::npos){
            string temp;
            ll i;
            for(i=0; input[i] != ' '; i++) ;
            for(i=i+1; i<input.size(); i++) temp.push_back(input[i]);
            current_version.features.push_back(temp);
            versionStore.push_back(current_version);
        }
        else if(input.find("Modify") != string::npos){
            string previousFeature, newFeature, temp;
            ll i;
            for(i=0; input[i] != ' '; i++) ;
            for(i=i+1; input[i]!=' '; i++) previousFeature.push_back(input[i]);
            for(i=i+1; i<input.size(); i++) newFeature.push_back(input[i]);
            current_version.modify(previousFeature, newFeature);
            versionStore.push_back(current_version);
        }
        else{
            ll i;
            for( i=0; input[i]!=':'; i++) ;
            ll version_number;
            string feature,temp;
            for(i=i+1; input[i]!=' '; i++) temp.push_back(input[i]);
            version_number = stoll(temp);
            version_number--; // we used zero based index
            for(i=i+1; i<input.size(); i++) feature.push_back(input[i]);
            if(versionStore[version_number].hasFeature(feature)) cout << "Yes\n";
            else cout << "No\n";
        }
    }
    return 0;
}

/*
[A, B, C]
Add D
Check version:2 D
Check version:2 E
Add E
Check version:3 E
Modify D D2
Check version:4 D
Check version:4 D2

*/
