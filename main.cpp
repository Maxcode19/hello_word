#include <iostream>
#include "My_class.h"
#include "Student.h"
#include "New_student.h"
#include "Pair.h"
#include "Pair.cpp"
#include <string>

using namespace std;

int main()
{
    int a, b, c, d;
    Student student_x("N", 100, 3);
    My_class obj(1, 2, student_x);
    obj.print();

    /** Class seen as a pointer **/
    My_class *ptr = &obj;
    ptr -> print();

    /** Inheritance **/
    New_student New_student_x(3);
    New_student_x.get_code();

    /** class template **/
    Pair <int> obj_1(11,33); // To work it is necessary to add the file "Pair.cpp" (This is the I found myself)
    cout << obj_1.bigger() << endl;

    /* cout << "Insert a: \n";
    cin >> a;
    cout << "Insert b: \n";
    cin >> b;
    if(a > 100)
    {
        cout << "You passed \n";
        cout << "Congratulations! \n";
        if(a < b)
        {
            cout << "It is ok \n";
        }
        else
        {
            cout << "You are great \n";
        }
    }
    else
    {
        cout << "You failed \n";
        cout << "Sorry \n";
    } */
    return 0;
}
