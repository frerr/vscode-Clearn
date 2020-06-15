#include<iostream>
#include<cstring>


using namespace std;
class Person{
public:
    typedef enum {
        BOY = 0, 
        GIRL 
    }SexType;
    Person(char *namee, int a,SexType s){
        name=new char[strlen(namee)+1];
        strcpy(name,namee);
        age=a;
        sex=s;
    }
    int get_age() const{
        return this->age; 
    }
    Person& add_age(int a){
        age+=a;
        return *this; 
    }
    ~Person(){
        delete [] name;
    }
private:
    char * name;
    int age;
    SexType sex;
};


int main(){
    Person p("zhangsan",20,Person::BOY); 
    cout<<p.get_age()<<endl;
    cout<<p.add_age(10).get_age()<<endl;
    return 0;
}