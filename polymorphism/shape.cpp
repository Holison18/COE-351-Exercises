#include <iostream>

using namespace std;

class shape{
    protected:
        float area;
    public:
        shape(){

        }
        void get_area(){
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
        }
        void get_area(){
            area = 0.5*(height*base);
            shape::get_area();
        }
};

class square:public shape{
    private:
        float length;
    public:
        square(float l){
            length = l;
        }
        void get_area(){
            area = length*length;
            shape:get_area();
        }
};


int main(){
    shape* shp1;


    shp1 = new square(5);
    shp1->get_area();

    shp1 = new triangle(4.5,8);
    shp1->get_area();

}