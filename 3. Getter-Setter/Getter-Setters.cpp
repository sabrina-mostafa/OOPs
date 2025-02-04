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
    Hero h1 ;
    h1.setLevel('A') ;
    cout<<"Level: "<<h1.getLevel()<<endl ;

    return 0 ;
}

/*
O/P:

level: A

*/
