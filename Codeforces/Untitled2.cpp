#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
    vector<int> a={3,1,6,4}, b = {2,3,5,4};
    vector<int> temp;
    int i;
    for(i=0; i<a.size(); i++){
        int j;
        bool break_hoye_ashche=false;
        for(j=0; j<b.size(); j++){
            if(a[i]!=b[j]) continue;
            else{
                break_hoye_ashche=true;
                break;
            }
            if(break_hoye_ashche == false){
                int k;
                bool vanga=false;
                for(k=0; k<temp.size(); k++){
                    if(a[i] != temp[k]) continue;
                    else{
                        vanga=true;
                        break;
                    }
                }
                if(vanga==false) temp.push_back(a[i]);
            }
        }

    }
    return 0;
}
