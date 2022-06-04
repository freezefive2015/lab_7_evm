#include <stdio.h>
#include <iostream>
using namespace std;
int main(){
bool res = false;
float a = 0.9;
a = a-1;
asm(
"ucomiss %[X], %[Y]\n"
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
