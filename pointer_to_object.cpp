#include <iostream>

using namespace std;

class person{
    protected:
        char name[40];
    public:
        void getname(void){
            cout << "Enter name: ";
            cin >> name;
        }
        void putname(void){
            cout << "Name: " << name << endl;
        }
};
int main(void){
    person* perptr[40];
    int n = 0;
    char choice;
    do{
        perptr[n] = new person;
        perptr[n]->getname();
        n++;
        cout << "Enter another (y/n)? ";
        cin >> choice;
    }while(choice == 'y');

    for(int j=0; j<n; j++){
        cout<<"Person Number"<<j+1<<endl;
        perptr[j]->putname();
    }

    cout<<endl;
    return 0;

}