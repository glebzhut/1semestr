//
//  main.cpp
//  3
//
//  Created by Gleb Zhutowskiy on 12/1/19.
//  Copyright © 2019 Gleb Zhutowskiy. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;
void com_plus(vector<bool> & com)
{
    for(int i=com.size()-1;i>=0;--i){
        com[i]=!com[i];
        if(com[i]) return;
    }
    com.clear();
}

string pattern_of_coin(int N,vector<int> coin)
{
    vector<bool> combinations(coin.size()*2,0);
    string out;
    while(1){
        int sum=0;
        for(int i=0;i<combinations.size();++i){
            sum+=coin[i/2]*combinations[i];
            }


        if(sum==N){out="";
            for(int i=0;i<combinations.size();++i)
            if(combinations[i])
            out+=to_string(coin[i/2])+"+";
            out.erase(out.size()-1,1);
            return out;}
        com_plus(combinations);
        if(combinations.size()==0) return "0";
    }

}

int main()
{
    cout<<"Сoins:"<<endl;
    vector<int> coin(0);
    while(1){
        int s;
        cin>>s;cin.ignore();
        if(s==0) break;
        coin.push_back(s);
    }
    int N;
    cout<<"price:";
    cin>>N;

    int TRY=0;
    for(int i=0;i<coin.size();++i)
        TRY+=coin[i]*2;
    if(TRY<N) {cout<<-1<<endl;}
    int sw;
    for(int i=0;i<coin.size()-1;++i)
    if(coin[i]>coin[i+1]){
        sw=coin[i+1];
        coin[i+1]=coin[i];
        coin[i]=sw;
        i=0;
    }
    for(int i=coin.size()-1;i>=0;--i){
        if(N<coin[i]) coin.erase(coin.begin()+i);
        else break;
    }
    cout<<pattern_of_coin(N,coin)<<endl;
}

