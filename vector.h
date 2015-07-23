#ifndef vector_h
#define vector_h

//Originally a mix of ints and doubles, now all doubles
class vector {
     public:
        vector (double,double);
        void rotate (double radians);
        vector* operator + (vector& second);
        double m();
        double r();
        double x();
        double y();
     private:
        double xx, yy, rotation, magnitude;
};

#endif
