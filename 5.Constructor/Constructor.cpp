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
    Hero() {
        cout<<"Constructor Called"<<endl ;
    }
};


int main ()
{
    // Static Allocation of an Object
    Hero h1 ;

    // Dynamic Allocation of Object
    Hero* h2 = new Hero ;


    return 0 ;
}

/*
O/P:

Constructor Called
Constructor Called

*/
