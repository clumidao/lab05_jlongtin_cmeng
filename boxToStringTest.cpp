#include "shapeFuncs.h"
#include "tddFuncs.h"          
#include "shapes.h"    



int main() {
 
struct Box b1,b2;

initBox(&b1,3.0,4.0,5.0,6.0);
assertEquals("[ul=(3,4), w=5,h=6]",boxToString(b1), "boxToString(b1)");
 
initBox(&b2,3.14159,6.2831853071,7.42458,9.5672617043);
assertEquals("[ul=(3.14,6.28), w=7.42,h=9.56]", boxToString(b2), "boxToString(b2)");
assertEquals("[ul=(3,6), w=7,h=9]", boxToString(b2,1), "boxToString(b2,1)");
assertEquals("[ul=(3.141,6.283), w=7.424,h=9.567]", boxToString(b2,4), "boxToString(b2,4)");
assertEquals("[ul=(3.1415,6.2831), w=7.4245,h=9.5672]", boxToString(b2,5), "boxToString(b2,5)");
 
return 0;
}

