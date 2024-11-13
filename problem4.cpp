#include <iostream>
#include <string>
using namespace std;
void search(string& s, char& key){
    bool  j=true;
    for(int i=0; i<s.size(); ++i){
        if(s[i]==key){
            cout << "Found\n";
            return;
        }
    }
   cout << "Not found\n";
}
int main() {
   char c;
   string s;
   cin >> c ; //cout <<"salom";
   cin.ignore();
   getline(cin,s);
   search(s,c);
   //cout << s;
   //cout << c  << "\n";
   // << s;
   return 0;
}
