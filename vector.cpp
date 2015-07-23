
#include "vector_h"
#include <algorithm>
using namespace std;

vector::vector (double x, double y){
        xx = x;
        yy = y;
        magnitude = sqrt( xx * xx + yy * yy ); // uses standard library
        rotation = acos( xx / magnitude );
        rotation = yy > 0.0 ? rotation : 2.0*PI - rotation;//acos is imperfect
}

void vector::rotate(double radians) {
        rotation += radians;
        while (rotation >= 2.0 * PI){rotation -= 2.0*PI;}// only + values
        while (rotation < 0) {rotation += 2.0 * PI;}
        xx = magnitude * cos(rotation);
        yy = magnitude * sin(rotation);
} 

vector* vector::operator + (vector& second){
        return new vector (xx + second.x(),yy + second.y() );
}

double vector::x(){ return xx; }
double vector::y(){ return yy; }
double vector::m(){ return magnitude; }
double vector::r(){ return rotation; }
