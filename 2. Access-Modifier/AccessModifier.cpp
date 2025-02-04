///  ~~~~~Bismillah'hir Rah'maanir Rahim~~~~~  ///

/*  "  Allah(SWT) blesses with knowledge whom he wants. "   */
/*  " Indeed with Hardship, comes Ease. "    */


///         Originator : Sabrina Mostafa
///         Dept. Of CSE
///         International Islamic University Chittagong




#include<bits/stdc++.h>
using namespace std ;



class Hero {

    // properties
    public:
    int health = 10 ;

    void display() {
        cout<<"level: "<<level<<endl ;
    }

    private:
    char level='A' ;

    
};


int main ()
{
    Hero h1 ;
    cout<<"health: "<<h1.health<<endl ;
    h1.display() ;

    return 0 ;
}

/*
O/P:

health: 10
level: A

*/
