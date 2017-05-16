#include "shapeFuncs.h"
#include "tddFuncs.h"          
#include "shapes.h"    

//using namespace std;

int main() {
 
struct Box b1,b2;

initBox(&b1,3.1123456,4.14564563,5.178387654,6.11234567);
assertEquals("[ul=(3,4), w=5,h=6]",boxToString(b1,1), "boxToString(b1,1)");
assertEquals("[ul=(3.1,4.1), w=5.2,h=6.1]",boxToString(b1,2), "boxToString(b1,2)");
assertEquals("[ul=(3.11,4.15), w=5.18,h=6.11]",boxToString(b1,3), "boxToString(b1,3)");
assertEquals("[ul=(3.112,4.146), w=5.178,h=6.112]",boxToString(b1,4), "boxToString(b1,4)");
assertEquals("[ul=(3.1123,4.1456), w=5.1784,h=6.1123]",boxToString(b1,5), "boxToString(b1,5)");
assertEquals("[ul=(3.11235,4.14565), w=5.17839,h=6.11235]",boxToString(b1,6), "boxToString(b1,6)");
 
return 0;
}

