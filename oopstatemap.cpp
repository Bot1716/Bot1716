#include <iostream>
#include <map>
using namespace std;
int main(){
   map<string,int> state;
   state.insert(pair<string,int>("Maharashtra", 404042));
   state.insert(pair<string,int>("MadhyaPradesh", 594042));
   state.insert(pair<string,int>("Goa", 43444042));
   state.insert(pair<string,int>("Sikkim", 955854042));
   state.insert(pair<string,int>("Telangana", 9575304042));
   state.insert(pair<string,int>("TamilNadu", 9047584042));
   state.insert(pair<string,int>("Himachal", 4649042));
   state.insert(pair<string,int>("Rajasthan", 947294042));
   string search;
   cout << "Enter the state you want to search : "<<endl;
   cin>>search;
   map<string,int>:: iterator i;
   int f=0;
   for(i=state.begin();i!=state.end();i++){
       if(search==i->first){
           f++;
           cout << "The population of "<<i->first<<" is : "<<i->second<<endl;
       }
   }
    if (f==0){
        cout<< "State not found";
    }
    return 0;
    
}



