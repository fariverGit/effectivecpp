#include <iostream>
using namespace std;

class B
{
public:
    explicit B(int x = 0, bool b = true){return;}
    //if we remove explicit from defination, then it won't report error, 
    //which may cause deep bug in large project.
    //B(int x = 0, bool b = true){return;}
};

void dosomething(B bobject)
{
    return;
}

int main()
{
    B obj1;
    dosomething(obj1);

    B obj2(28);
    dosomething(28);
//
//    dosomething(B(28));

    return 0;
}
