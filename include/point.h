/*
 * Reading <Inside the C++ Object Model>
 * chapter 1
 * */

#ifndef OPERATOR_H_
#define OPERATOR_H_

//#include <string>
//#include <sstream>
#include <iostream>
template < class type>
class Point3d 
{    
public:
    Point3d(type x = 0.0, type y = 0.0, type z = 0.0)
        : _x(x), _y(y), _z(z) { }
    type x() {return _x;}
    void x( type xval ) { _x = xval;}
    type y() {return _y;}
    void y( type yval ) { _y = yval;}
    type z() {return _z;}
    void z( type zval ) { _z = xval;}
private:
    type _x;
    type _y;
    type _z;
};

template < class type, int dim >
class Point 
{
public:
    Point();
    Point( type coordes[dim] ) {
        for ( int index = 0; index < dim; index++)
            _coords[index] = coordes[index];
    }
    type& operator[](int index) {
        assert(index < dim && index >= 0);
        return _coords[index];
    }
    type operator[](int index) const {
        assert(index < dim && index >= 0);
        return _coords[index];
    }
private:
    type _coords[dim];
};

template < class type, int dim >
inline std::ostream& operator<<(std::ostream& os, const Point<type, dim>& pt) {
    os << "( ";
    for (int ix = 0; ix < dim-1; ix++)
        os << pt[ix] << ", ";
    os << pt[dim-1];
    os << " )";
}
#endif //OPERATOR_H_

