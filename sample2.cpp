#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream file("sample.txt");
    if(file.is_open()){
        int number;
        string word;

        while(file >> number >> word){
            cout<<number<<"//"<<word<<endl;
        }
        file.close();
    } else {
        cerr<<"CAN NOT OPEN THE FILE..."<<endl;
    }
    return 0;
}