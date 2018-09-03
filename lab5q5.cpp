// first include the library
#include <iostream>
using namespace std;
// using main function
int main(){
// declaring variables
int num;
// asking the user for values
cout<< "Enter the value"<<endl;
cin>> num;
// conditions
if(num%2 == 0){
cout<< num << "is even";
}
else{
cout<< num << "is odd";
}
return 0;
}
