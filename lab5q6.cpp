// first include the library
#include <iostream>
using namespace std;
// using main function
int main(){
// declaring variables
int year, leap;
// asking for values
cout<< "Enter the year"<<endl;
cin>> year;
// conditions
if (year%4 == 0){
cout<< leap << "leap year"<<endl;
}
else{
cout<< leap << "not a leap year"<< endl;
}
return 0;
}
