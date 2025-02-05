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
    char level='X' ;  // this == (h1.level)


    ~Hero() {
        cout<<"Destructor is called"<<endl ;
    }
};


int main ()
{
    // Static
    Hero h1 ;   // Automatic called

    // Dynamic
    Hero *h2 =  new Hero ;
    delete h2 ;             // Menually called




    return 0 ;
}

/*
O/P:

Destructor is called
Destructor is called

*/
