#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;

int main(){
    unordered_map<string, int>  mymap;

    /// insert
    pair<string,int> p("abc",1);
    mymap.insert(p);

    mymap["def"] = 2;  /// like array

    /// find or access
     cout<<mymap["abc"]<<endl;
     cout<<mymap.at("abc")<<endl;

     cout<<"Size "<<mymap.size()<<endl;

     /// cout<<mymap.at("def")<<endl;   /// throw exception
     cout<<mymap["def"]<<endl;

    cout<<"Size "<<mymap.size()<<endl;


     /// check presence of a key
     if(mymap.count("def") > 0){
        cout<<"def is present"<<endl;
     }else{
        cout<<"def not present"<<endl;
     }


     /// update
     mymap["abc"] = 20;

     /// erase
     mymap.erase("def");

     cout<<"Size "<<mymap.size()<<endl;


     /// check presence of a key
     if(mymap.count("def") > 0){
        cout<<"def is present"<<endl;
     }else{
        cout<<"def not present"<<endl;
     }

    return 0;
}
