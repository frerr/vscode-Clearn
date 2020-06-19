#include<iostream>
#include<string>
#include<fstream>

void Copyfile(std::ifstream & inF,std::ofstream & outF,const std::string &str = "default.txt"); //一般stream objects打开/关闭是改变的，所以不适用const限定
                                                                 //默认参数str
int main(){
    std::ifstream inFile;
    inFile.open("Summary");
    std::ofstream outFile;
    std::string name = "SummaryCpy.txt";
    Copyfile(inFile,outFile,name);
    return 0;
}

void Copyfile(std::ifstream & inF,std::ofstream & outF,const std::string &str){
    outF.open(str);
    if(! outF.is_open()){ //是否成功打开
        std::cout << "open file "<< str << " Erro" << std::endl;
        exit(EXIT_FAILURE);
    }
    std::string str1;
    while (inF.good()) { //是否为EOF
        getline(inF,str1);
        outF << str1 << std::endl;
    }
    std::cout << "Copy successfully !!" << std::endl;
}
