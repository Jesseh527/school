
// Place the following picture as a comment at the beginning of
// your memory_segments.cpp file.
// Add the significant addresses to diagram to the right of the boxes.
// Add text, edata, end, and the names of the variables to right as well.
/*
        +------------------+
        |             TEXT |
        |                  |
        |  instructions in | x40135d = proc1
        |     machine code | x401443 = proc2
        |                  |
        +------------------+ x1015e5 = etext
        |             DATA | x404034 = g1 global initialized
        |    - initialized | x404038 = g3
        |        variables | x40403c = ls1 static initialized
        |                  | x404040 = ls3
        |                  |
        |  --------------- | x404044 = edata
        |                  | x404080 = g0 global uninitialized
        |                  | x4040a0 = g2 big array
        |                  | x405810 = g4
        |  - uninitialized | x405814 = ls0 static uninitialized
        |        variables | x405818 = ls2
        |                  |
        |                  |
        | ---------------  | x405820 = end
        | - heap for       | x1545eb0 pointed to by heap1
        | dynamic          | x1545ee0 pointed to by heap2
        | allocation       |
        |                  |
        |                  |
        +------------------+
                |
                |
                V
            ......
                ^
                |
                |
        +------------------+
        |            STACK | x7ffdeffb79d8 = lc4, lc6 | Activation record for
        |       - function | x7ffdeffb79dc = lc3, lc5 | proc1 or proc2
        |       activation |
        |          records |
        |          - local | 7ffdeffb79f4 = lc2 | Activation record for
        |        automatic | 7ffdeffb79f8 = lc1 | main
        |        variables | 7ffdeffb79fc = lc0 |
        +------------------+

#5 they get larger
#6 two or more varibles can not have the same adress because only one item can be assigned to that adress and it did hapen the 2nd one would override it
#7 varibles/ arguments in a recursive function are stored in the stack
*/
// memory_segments.cpp
#include <stdio.h>
#include <stdlib.h>
#include<iostream>
using namespace std;
int g0; /* global variable, uninitialized */
int g1 = 14; /* global variable, initialized */
int g2[1500]; /* global variable, uninitialized */
int g3 = 16; /* global variable, initialized */
int g4; /* global variable, uninitialized */
void proc1();
void proc2();
int fact(int n){
  if (n >1){
    return n * fact(n-1);
  }
  else{
    return 1;
  }

}
int main()
{
    extern int etext[], edata[], end[];
    int lc0; /* local variable, stored on stack */
    int lc1 = 27; /* local variable, stored on stack; mix init and uninit */
    int lc2; /* local variable, stored on stack */
    static int ls0; /* local static variable, uninitialized data */
    static int ls1 = 19; /* local static variable, initialized data */
    int *pheap1;
    int *pheap2;
    pheap1 = new int[10];
    pheap2 = new int[100];
    printf("\n\n---------- main -------------------\n\n");
    printf("%14p (%15lu): Last address\n", 0xffffffffffff, 999999999999999);
    printf("%14p (%15lu): Address etext\n", etext, etext);
    printf("%14p (%15lu): Address edata\n", edata, edata);
    printf("%14p (%15lu): Address end\n", end, end);
    printf("%14p (%15lu): Address of code for proc1\n", &proc1, &proc1);
    printf("%14p (%15lu): Address of code for proc2\n", &proc2, &proc2);
    printf("%14p (%15lu): Address of uninitialized global variable g0\n", &g0, &g0);
    printf("%14p (%15lu): Address of initialized global variable g1\n", &g1, &g1);
    printf("%14p (%15lu): Address of uninitialized global array g2\n", &g2[0], &g2[0]);
    printf("%14p (%15lu): Address of initialized global variable g3\n", &g3, &g3);
    printf("%14p (%15lu): Address of uninitialized global variable g4\n", &g4, &g4);
    printf("%14p (%15lu): Address heap1 in heap space\n", pheap1, (unsigned long) pheap1);
    printf("%14p (%15lu): Address heap2 in heap space\n", pheap2, (unsigned long) pheap2);
    printf("%14p (%15lu): Address of local variable lc0\n", &lc0, &lc0);
    printf("%14p (%15lu): Address of local variable lc1\n", &lc1, &lc1);
    printf("%14p (%15lu): Address of local variable lc2\n", &lc2, &lc2);
    printf("%14p (%15lu): Address of local uninitialized static var ls0\n", &ls0, &ls0);
    printf("%14p (%15lu): Address of local initialized static var ls1\n", &ls1, &ls1);
    proc1();
    proc2();
    int n = 0;
    cout << "select a number for n!:";
    cin >> n;
    cout << n << "! = "<< fact(n)<<"\n";
      
    return 0;
}
void proc1() {
    int lc3;
    int lc4 = 37;
    printf("\n\n----------- proc1 ------------------\n\n");
    printf("%14p (%15lu): Address of code for proc1\n", &proc1, &proc1);
    printf("%14p (%15lu): Address of global variable g0\n", &g0, &g0);
    printf("%14p (%15lu): Address of global variable g1\n", &g1, &g1);
    printf("%14p (%15lu): Address of global variable g2\n", &g2[0], &g2[0]);
    printf("%14p (%15lu): Address of global variable g3\n", &g3, &g3);
    printf("%14p (%15lu): Address of global variable g4\n", &g4, &g4);
    printf("%14p (%15lu): Address of local variable lc3\n", &lc3, &lc3);
    printf("%14p (%15lu): Address of local variable lc4\n", &lc4, &lc4);
}
void proc2() {
    int lc5;
    int lc6 = 51;
    static int ls2;
    static int ls3 = 47;
    printf("\n\n------------ proc2 -----------------\n\n");
    printf("%14p (%15lu): Address of code for proc2\n", &proc2, &proc2);
    printf("%14p (%15lu): Address of global variable g0\n", &g0, &g0);
    printf("%14p (%15lu): Address of global variable g1\n", &g1, &g1);
    printf("%14p (%15lu): Address of global variable g2\n", &g2[0], &g2[0]);
    printf("%14p (%15lu): Address of global variable g3\n", &g3, &g3);
    printf("%14p (%15lu): Address of global variable g4\n", &g4, &g4);
    printf("%14p (%15lu): Address of local variable lc5\n", &lc5, &lc5);
    printf("%14p (%15lu): Address of local variable lc6\n", &lc6, &lc6);
    printf("%14p (%15lu): Address of local uninitialized static var ls2\n", &ls2, &ls2);
    printf("%14p (%15lu): Address of local initialized static var ls3\n", &ls3, &ls3);
}

