# OOPs
<br>

### *Empty class:*
---
    It takes 1 BYTES in the momory for identification/tracing.

### *Access Modifiers:*
---
       -> Public
           >> Accessed Both INSIDE & OUTSIDE of the Class 
       -> Private (by Default)
           >> Accessed Only INSIDE of the Class 
       -> Protected
### *Getter and Setters:*
---
    Private Properties/data members are accessible through these.


### *Padding in OOP*
---
    Padding in OOP (specifically in memory management) refers to *extra bytes added between data members or objects* to 
    align data in memory efficiently. This happens due to **memory alignment constraints** imposed by the CPU for
    optimized access speed.


**Expected size:** `1 (char) + 4 (int) = 5 bytes`  
**Actual size:** **8 bytes** (due to padding)  

🔹 **Explanation:**  
- `char c` (1 byte) is stored first.  
- The next `int x` (4 bytes) requires **4-byte alignment**.
- **Padding (3 extra bytes)** is inserted after `char c` to align `int x` properly.


#### *How to Reduce Padding?*
    1. Rearrange Data Members (Place larger data types first)
    
    2. Use `#pragma pack(1)` (Disables Padding)


### *Greedy Alignment in Memory Layout*
---
    Greedy Alignment is a memory optimization strategy where the compiler aggressively aligns data members to minimize 
    padding and optimize memory usage while maintaining alignment constraints.

#### **Example With Greedy Alignment**
```cpp
struct B {
    int x;    // 4 bytes
    short y;  // 2 bytes
    char c;   // 1 byte
};
```
#### **Optimized Memory Layout**
| **Address** | **Value** |
|------------|----------|
| 0x0000-0x0003 | `x` (4 bytes) |
| 0x0004-0x0005 | `y` (2 bytes) |
| 0x0006 | `c` (1 byte) |
| 0x0007 | **Padding (1 byte)** |

🔹 **Total size:** `8 bytes`  
🔹 **Padding waste:** `1 byte` (instead of 5)  
🔹 **Memory saved:** `4 bytes`  


### *Constructor:*
---
- Same function name as class
- Returns nothing(not even void), No return type
- As soon as we create Object, the default constructor is invoked.
- When we write any Constructor(default/parameterized) the Built-in dafault one is **Deleted** automatically.

### *This Keyword:*
---
    It is a pointer that points to the current object.

### *Copy Constructor:*
---
- Whenever a **Class** is declared, a Copy Constructor is created automatically.
- Here, **Pass by Reference** is applied.
- Pass by value creates an infinite loop as it creates copys of values that calles the copy constructor again and again.

### *Shallow Copy:*
---
- axcesses the **same memory.**
- In the **Default Copy-Constructor** just the address is copied.

### *Deep Copy:*
---
- In the **Customized Copy-Constructor** new address/mmory is allocated.

### *Destructor:*
---
- Memory Deallocator
- Same name as Class
- No return type
- No i/p parameters
- **Static Alocation:**
  - Destructor is called Automatically.
- **Dynamic Alocation:**
  - Destructor is called Menually. (synatx: **delete obj**)

### *Static Keyword*
---
    It creates Data Members that belongs to Class, and there is NO NEED OF Object to access these Static Data Members.

    1. No need to create object to access the member
    
    2. Initialization is done Outside class
    
    3. Initialization Syntax: dataType className :: staticDataMemberName = 10(value)
       Example:  int Hero :: timeToComplete = 10 ;
    
    4. Access Syntax:  className::staticDataMemberName
       Example: cout<<Hero::timeToComplete<<endl ;

### *Static Function*
---
- No Need to Create Object
- They don't have this keyword (no object, that's why)
- Can Access ONLY Static Data Members 











