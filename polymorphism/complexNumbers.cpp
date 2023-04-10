#include <iostream>

using namespace std;

// create a complex numbers class 
class complexNumber{
    private:
        int real;
        float imaginary;

    public:
        // create a parameterless constructor
        complexNumber(){

        }

        complexNumber(int i,float r){
            real = i;
            imaginary = r;
        }

        void displayNumber(){
            cout << real << " + " << imaginary << "i" << endl;
        }

        int getReal(){
            return real;
        }

        float getImaginary(){
            return imaginary;
        }

        
};

//create a function to add two complex numbers
complexNumber addtwoNumber(complexNumber n1,complexNumber n2){
    int r;
    float i;
    r = n1.getReal() + n2.getReal();
    i = n1.getImaginary() + n2.getImaginary();
    complexNumber temp(r,i);
    return temp;
}

//create a function to subtract two complex numbers
complexNumber SubtwoNumber(complexNumber n1,complexNumber n2){
    int r;
    float i;
    r = n1.getReal() - n2.getReal();
    i = n1.getImaginary() - n2.getImaginary();
    complexNumber temp(r,i);
    return temp;
}

// the main function
int main(){

    // create two instance of the complexNumber class and let it add and substract
    complexNumber comp1(5,4),comp2(6,10),comp3;
    comp1.displayNumber();
    comp2.displayNumber();

    cout<<"Adding the two complex numbers"<<endl;
    comp3 = addtwoNumber(comp1,comp2);
    comp3.displayNumber();
    cout<<"\n\n";

    cout<<"Subtracting the two complex numbers"<<endl;
    comp3 = SubtwoNumber(comp1,comp2);
    comp3.displayNumber();
    cout<<"\n\n";
    
}