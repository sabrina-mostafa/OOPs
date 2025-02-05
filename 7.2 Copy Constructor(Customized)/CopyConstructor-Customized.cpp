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

    // Parameterized Constructor
    Hero(int health, char level) {     // Hero h1(30, 'A')
        this->health = health ;
        this->level = level ;
    }

    // Copy Constructor (Pass by Ref)
    Hero (Hero &temp) {                 //  Hero h2(h1) ;
        cout<<"\nCopy Constructor Called"<<endl ;
        this->health = temp.health ;
        this->level = temp.level ;
    }

    void display() {
        cout<<"Health of h2: "<<this->health<<endl ;
        cout<<"Level of h2: "<<this->level<<endl ;
    }
};


int main ()
{
    // Current Object = h1
    Hero h1(30, 'A') ;

    cout<<"Health of current Object: "<<h1.health<<endl ;
    cout<<"Level of current Object: "<<h1.level<<endl ;

    // Copy Constructor called  (Copy of h1 into h2)
    Hero h2(h1) ;

    h2.display() ;




    return 0 ;
}

/*
O/P:

Health of current Object: 30
Level of current Object: A

Copy Constructor Called
Health of h2: 30
Level of h2: A

*/
