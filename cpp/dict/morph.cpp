#include<bits/stdc++.h>
using namespace std;


class Animal{
    public:
        virtual void speak(){
            cout<<"Animal Speaking..";
        }
};


class Dog : public Animal{
    public: void speak(){
        cout<<"Bark...";
    }
};

class Cat : public Animal{
    public: void speak(){
        cout<<"Meaow...";
    }
};

int main(){

    Dog dog ;
    Cat cat ;

    Animal* animal;
    animal = &dog;
    animal->speak();

}