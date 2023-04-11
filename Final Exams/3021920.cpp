/*
Index Number: 3021920
Department: Computer Engineering
*/

#include <iostream>
#include <unistd.h>

using namespace std;
// create a CPolygon abstract class
class CPolygon{
protected:
    float width;
    float height;
    float Area;
public:
    CPolygon():Area(0){};// default constructor

    //SetValues function which allows the user to set the values for the width and the height
    void setValues(){
        cout<<"Width: ";cin>>width;
        cout<<"Height: ";cin>>height;
    }

    // Virtual area function that calculates the area of the polygon when the user inputs the values for the width and the height.
    virtual float area() = 0;

    // Print out the area of the polygon
    void printArea(){
        cout<<"Area: "<<this->Area<<endl;
    }

};

// derived Rectangle class
class CRectangle:public CPolygon{
public:
    float area(){
        //calculate the area of the rectangle
        Area = height * width;
        return Area;
    }
};

// derived triangle class
class CTriangle:public CPolygon{
public:
    float area(){
        // calculate the area of the trinagle
        Area = 0.5 * (height * width);
        return Area;
    }
};

// derived square class
class CSquare:public CPolygon{
public:
    float area(){
        //calculate the area of the square
        Area = height * width; // a square should have same length
        return Area;
    }
};

// the main fuction
int main()
{
    // create an array pointer which holds 100 objects of the polygon class
    CPolygon* polygon[100];
    int n = 0;
    char choice;

    // create a do while loop
    do{
        cout<<"\n\n\t\t\t\t--------Calculate the Area of a Polygon--------------"<<endl;
        cout<<"Select the type of Polygon"<<endl;
        cout<<"[1] Rectangle"<<endl;
        cout<<"[2] Triangle"<<endl;
        cout<<"[3] Square"<<endl;
        cout<<"Option: ";

        // An integer value to the the response from the user
        int response;
        cin>>response;

        //create an if-else block to select the type of polygon to take it's inputs depending on the choice of the user
        if(response==1){
            // create a pointer to the selected Polygon
            polygon[n] = new CRectangle;
            polygon[n]->setValues();
        }else if(response==2){
            // create a pointer to the selected Polygon
            polygon[n] = new CTriangle;
            polygon[n]->setValues();
        }else if(response==3){
            // create a pointer to the selected Polygon
            polygon[n] = new CSquare;
            polygon[n]->setValues();
        }else{
            cout<<"Invalid Response"<<endl;
        }

        // increase the value of n by 1
        n++;

        // Allow the user to check the area of another polygon or exit
        cout<<"Do you want to add another polygon?('y'/'n'): ";cin>>choice;
        system("clear");
    }while(choice=='y');

    // create a for loop to print our the values in the polygon array
    for(int j=0;j<n;j++){
        // first calculate the area
        polygon[j]->area();
        // Print the area of the polygon to the screen
        polygon[j]->printArea();
    }

}
