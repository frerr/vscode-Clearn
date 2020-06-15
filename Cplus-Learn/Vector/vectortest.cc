#include <iostream>
#include <vector>
#include <string>

using namespace std;

class personinfo{
    private:
    string _firstname;
    string _lastname;
    public:
    personinfo();
    personinfo(string &fname,string &lname);
    void show() const;
    void getname();
};

void personinfo::show() const{
    std::cout << "Name is "<<_firstname<<' '<< _lastname << endl;
}

personinfo::personinfo(){
    _firstname = " ";
    _lastname = " ";
    cout <<"default constructor"<<endl;
}

personinfo::personinfo(string &fname,string &lname){
    _firstname = fname;
    _lastname = lname;
    cout <<"personinfo constructor"<<endl;
}

void personinfo::getname(){
    cout <<"pls input first name: "<<endl;
    string n1;
    string n2;
    cin >> n1;
    _firstname = n1;
    cout <<"pls input last name: "<<endl;
    cin >> n2;
    _lastname = n2;
}

int main(){
    vector<personinfo> v1;
    string name1 = "Chris";
    string name2 = "Paul";
    personinfo per1(name1,name2);
    v1.push_back(per1);
    personinfo per2,per3;
    per2.getname();
    per3.getname();
    v1.push_back(per2);
    v1.insert(v1.end()-1,per3); //end()指向的是最后一个元素的下一个位置
    vector<personinfo>::iterator pt = v1.begin();
    for(;pt!=v1.end();pt++){
        pt->show();
    }
    return 0;
}