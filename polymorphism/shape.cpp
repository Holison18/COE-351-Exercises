#include <iostream>

using namespace std;

class shape{
    protected:
        float area;
    public:
        shape():area(0){}

        virtual void get_area(){
            cout<<"Area: "<<area<<endl;
        }
};

class triangle:public shape{
    private:
        float height, base;
    public:
        triangle(float h,float b){
            height = h;
            base = b;
            area = 0.5*height*base;
        }
        void get_area(){
            cout<<"Area of rectanle: "<<area<<endl;
        }
};

class square:public shape{
    private:
        float length;
    public:
        square(float l){
            length = l;
            area = length*length;
        }
        void get_area(){
            cout<<"Area of square: "<<area<<endl;
        }
};


int main(){
    shape* shp1[2];

    shp1[0] = new triangle(5,20);
    shp1[1] = new square(10);

    // getting the area of the triangle
    shp1[0]->get_area();
    shp1[1]->get_area();

    return 0;



}