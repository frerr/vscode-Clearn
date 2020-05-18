#include<iostream>
#include<string>
#include<fstream>
using namespace std;

void Copyfile(ifstream & inF,ofstream & outF,const string &str); //一般stream objects打开/关闭是改变的，所以不适用const限定

int main(){
    ifstream inFile;
    inFile.open("Summary");
    ofstream outFile;
    string name = "SummaryCpy.txt";
    Copyfile(inFile,outFile,name);
    return 0;
}

void Copyfile(ifstream & inF,ofstream & outF,const string &str){
    outF.open(str);
    if(! outF.is_open()){ //是否成功打开
        cout << "open file "<< str << " Erro" << endl;
        exit(EXIT_FAILURE);
    }
    string str1;
    while (inF.good()) { //是否为EOF
        getline(inF,str1);
        outF << str1 << endl;
    }
    cout << "Copy successfully !!" << endl;
}
