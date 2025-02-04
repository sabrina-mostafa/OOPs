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




