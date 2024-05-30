#include <iostream>

using namespace std;
class sample
{
    int a;
    int b;

public:
    friend float mean(sample s);
    void setvalue()
    {
        a = 25;
        b = 40;
    }
};
float mean(sample s)

{
    return float(s.a + s.b) / 2.0;
}

int main(int argc, char const *argv[])
{
    sample x;
    x.setvalue();
    cout << "mean value = " << mean(x) << endl;
    return 0;
}
// Note the friend function accessed the class variable a and b by using the dot operator and the object passed to it. The function call
// call mean (x) passes the object x by value to the friend function
/*
class  X {
    ......
    ..
    int function (); member funtion of X

}
class Y
{
    friend int x :: fun1();
}
the function fun1 () is a member of class s and a friend of Class 
Y
*/