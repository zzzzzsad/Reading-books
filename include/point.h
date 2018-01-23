/*
 * Reading <Inside the C++ Object Model>
 * chapter 1
 * */

template < class type>
class Point3d 
{    
public:
    Point3d(type x = 0.0, type y = 0.0, type z = 0.0)
        : _x(x), _y(y), _z(z) { }
    type x() {return _x;}
    void x( type xval ) { _x = xval;}
private:
    type _x;
    type _y;
    type _z;
};

template < class type, int dim>
class Point 
{
public:
    Point();
    Point( type coordes[ dim ] ) {
        for ( int index = 0; index < dim; index++)
    }
    
}


