#include <iostream>

using namespace std;

class shape{
    private:
        string name;
        string color;
    public:
        shape(){} // default constructor

        void get_data(){
            cout << "Name: "; cin >> name;
            cout << "Color: " ; cin >> color;
        }

        void display(){
            cout << "Shape: " << name << endl;
            cout << "Color: " << color << endl;
        }
};

class rectangle: public shape{
    private:
        float length;
        float width;
    public:
        rectangle(){} // default constructor

        void get_data(){
            shape::get_data();
            cout << "Length: "; cin >> length;
            cout << "Width: "; cin >> width;
        }

        void display(){
            shape::display();
            cout << "Length: " << length << endl;
            cout << "Width: " << width << endl;

            float area = length * width;
            cout << "Area: " << area << endl;
            float perimeter = 2 * (length + width);
            cout << "Perimeter: " << perimeter << endl;
        }
};

int main(){
    rectangle r;
    cout << "Enter rectangle data: " << endl;
    r.get_data();
    cout << "\n\nRectangle data: " << endl;
    r.display();
    cout << endl;
    return 0;

}