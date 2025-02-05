///  ~~~~~Bismillah'hir Rah'maanir Rahim~~~~~  ///

/*  "  Allah(SWT) blesses with knowledge whom he wants. "   */
/*  " Indeed with Hardship, comes Ease. "    */


///         Originator : Sabrina Mostafa
///         Dept. Of CSE
///         International Islamic University Chittagong




#include<bits/stdc++.h>
using namespace std ;



class Hero {
public:
    int health=10 ;  // this == (h1.health)

    // Parameterized Constructor
    Hero(int health) {
        cout<<"Address of this pointer: "<<this<<endl ;
        this->health = health ;
    }
};


int main ()
{
    // Current Object = h1
    Hero h1(30) ;

    cout<<"Address of current Object, h1: "<<&h1<<endl ;
    cout<<"Value of current Object, h1: "<<h1.health<<endl ;




    return 0 ;
}

/*
O/P:

Address of this pointer: 0x61ff0c
Address of current Object, h1: 0x61ff0c

Value of current Object, h1: 30

*/
