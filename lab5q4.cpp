// first include the library
#include <iostream>
using namespace std;
// using main function
int main(){
// declaring variables
int a, divisible, nondivisible;
// asking the user for values
cout<< "Enter the value";
cin>>a;
// conditions
if ((a%5 == 0) && (a%11 == 0))
{
cout<< "divisible";
}
else{
cout<< "nondivisible";
}
}
