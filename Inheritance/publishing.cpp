#include <iostream>

using namespace std;

// create a publication class
class publications{
    private:
        string Title;
        float Price;
    public:
        void get_funct(){
            cout<<"Title: ";cin>>Title;
            cout<<"Price: ";cin>>Price;
        }
        void set_funct(){
            // print the data to the user
            cout<<"Title: "<<Title<<endl;
            cout<<"Price: "<<Price<<endl;
        }
};

class book:public publications{
    private:
        int page_count;
    public:
        // get the number of pages from the user
        void get_funct(){
            publications::get_funct();
            cout<<"Number of Pages: ";cin>>page_count;
        }
        void set_funct(){
            // print the data to user
            publications::set_funct();
            cout<<"Number of Pages: "<<page_count<<endl;
        }
};

class tape:public publications{
    private:
        float playing_time;
    public:
        // get the number of pages from the user
        void get_funct(){
            publications::get_funct();
            cout<<"Enter the playing time(minutes): ";cin>>playing_time;
        }
        void set_funct(){
            // print the data to user
            publications::set_funct();
            cout<<"Playing time: "<<playing_time<<endl;
        }    
};


int main(){
    cout<<"\n\t\t\t\t\tPublications"<<endl;
    cout<<"[1]Add a book"<<endl;
    cout<<"[2]Add Audio Cassette"<<endl;
    int option;
    cin>>option;
    if(option == 1){
        book book1;
        cout<<"Enter Information"<<endl;
        book1.get_funct();
        cout<<"\n\nPrint Information"<<endl;
        book1.set_funct();
        main();
    }else if(option == 2){
        tape tape1;
        cout<<"Enter Information"<<endl;
        tape1.get_funct();
        cout<<"\n\nPrint Information"<<endl;
        tape1.set_funct();
        main();
    }else{
        exit(0);
    }
}