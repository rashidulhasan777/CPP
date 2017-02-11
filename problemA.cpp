#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<cstdio>
#include<algorithm>
using namespace std;

int main()
{

    int t, counter=0;
    string country, s;
    vector<string> stAra;
    int ara[2100]={1};
    char line[70];
    cin >> t;
    gets(line);
    for(int i=0;i<t;i++)
    {

        gets(line);
        istringstream is(line);
        int x=0;

        while(is >> s)
        {
            if(x==0)
                stAra.push_back(s);
            x++;


        }

        //cout << country << " " << stAra.size() << endl;
    }
    sort(stAra.begin(), stAra.end());

        for(int k=0;k<stAra.size();k++)
        {
            counter=0;
            int o;
            if(k==0)
                o=1;
            else
               o=0;
            for(int l=o;l<stAra.size();l++)
            {
                if(stAra[k]==stAra[l])
                    ara[k]++;
            }




        }
        for(int i=0;i<stAra.size();i++)
        {
            cout << stAra[i] << " " << ara[i] << endl;
            if(ara[i]>1)
                i+=ara[i]-1;
        }
    return 0;
}
