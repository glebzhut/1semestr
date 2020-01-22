//
//  main.cpp
//  2
//
//  Created by Gleb Zhutowskiy on 12/1/19.
//  Copyright © 2019 Gleb Zhutowskiy. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

vector<string> all_combinations(vector<string> com)
{
    vector<string> all(0);
    if(com.size()==1) return com;
    
    for(int i=0;i<com.size();++i){
        vector<string> gets(0);
        vector<string> com_min1(0);
        
        for(int j=0;j<com.size();++j)
            if(j!=i) com_min1.push_back(com[j]);
        string sep=com[i];
        gets=all_combinations(com_min1);
        
        for(int j=0;j<gets.size();++j)
            all.push_back(sep+" "+gets[j]);
    }
    return all;
}
int main()
{
    vector<string> combination(0);

    string str;
    cout<<"Elements:"<<endl;
    
    while(1){
        cin>>str;
        if(str==".") break;
        cin.ignore();
        combination.push_back(str);

    }
    vector<string> all(0);
    all=all_combinations(combination);
    for(int i=0;i<all.size()-1;++i)
        
    for(int j=i+1;j<all.size();++j)
        if(all[i]==all[j]) all.erase(all.begin()+j);
    
    for(int i=0;i<all.size();++i)
        cout<<all[i]<<"   :   "<<i+1<<endl;
}
