#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream file("sample.txt");
    if(file.is_open()){
        string line;
        while(getline(file, line)){
            cout<<line<<endl;
        }
        file.close();
    } else {
        cerr<<"failed to open the file..."<<endl;
    }
    return 0;
}