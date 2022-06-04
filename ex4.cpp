#include <stdio.h>
#include <iostream>
using namespace std;
int main(){
bool res = false;
double a = 1.9;
asm(
"vcomisd %[X], %[Y]\n"
: "=@ccb"(res)
: [X]"x"(a), [Y]"x"(1.0)
: "cc"
);
if (!res){
cout << "Less" << endl;
}
else{cout << "More" << endl;}
return 0;
}
