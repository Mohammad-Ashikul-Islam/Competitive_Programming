    #include<bits/stdc++.h>
    using namespace std;

    #define ll long long


    int main()
    {
        ll t;
        cin >> t;
        while(t--){
            ll n;
            cin >> n;
            string s;
            cin >> s;
            ll i,ind=-1;
            char ch = ' ';
            for(i=n-1; i>0; i--){
                if(ch==' ') ch = s[i];
                ch = min(ch,s[i]);
            }
            if(ch>s[0]) cout << s << endl;
            else{
                cout << ch;
                for(i=n-1; i>0; i--){
                    if(s[i]==ch){
                        ind = i;
                        break;
                    }
                }
                for(i=0; i<s.size(); i++){
                    if(i==ind) continue;
                    cout << s[i];
                }
                cout << endl;
            }
        }
        return 0;
    }
