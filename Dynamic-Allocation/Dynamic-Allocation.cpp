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
    int health = 10 ;

    // Getter
    char getLevel() {
        return level ;
    }

    // Setter
    void setLevel(char c) {
        level = c ;
    }


    private:
    char level ;
};


int main ()
{
    // Static Allocation of Object
    Hero h1 ;
    h1.setLevel('A') ;
    cout<<"Static Level: "<<h1.getLevel()<<endl ;


    // Dynamic Allocation of Object
    Hero* h2 = new Hero ;
    h2->setLevel('B') ;
    cout<<"Dynamic Level: "<<(*h2).getLevel()<<endl ;


    return 0 ;
}

/*
O/P:

Static Level: A
Dynamic Level: B

*/
