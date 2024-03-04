//Implementtion of the maps using c++
# include<iostream>
# include<bits/stdc++.h>
# include<map>
# include<unordered_map>
using namespace std;
    int main(){
//creation of an unorderd map
map<string,int> m;
//insertion inside the map
pair<string,int> p=make_pair("babbar",3);
//first syntax hoe to insert inside the map
m.insert(p);

//Syntax 2
pair<string,int>pair2("love",2);
m.insert(pair2);

//Sntax 3
m["mera"]=1;//it will make a new entry
m["mera"]=2;//it will update the entry


//Searching inside the map
cout<<m["mera"]<<endl;
cout<<m.at("babbar")<<endl;

// cout<<m["unknownkey"]<<endl;
// cout<<m.at("unkownkey")<<endl;

cout<<m.size()<<endl;

//to check the presence of a particular key
cout<<m.count("babbar")<<endl;

//how to do deleteion inside the map
m.erase("love");
cout<<m.size()<<endl;


//for each loop
for( auto i:m){
     cout<<i.first<<" "<<i.second<<endl;
}
// how to use iterator in maps
map<string,int> :: iterator it=m.begin();
while(it!=m.end()){
    cout<<it->first<<" "<<it->second<<endl;
    it++;
}
return 0;
    }