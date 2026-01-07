#include <iostream>
using name space std;
int main(){
int a, b, selection;
cout << "Please enter an integer: ";
cin >> a;
out << "\n\n\n";
cout << "Select the function:\n";
cout << "1. Addition\n";
cout << "2. Subtraction\n";
cout << "3. Multiplication\n";
cout << "4. Division\n";
cout << "5. Modular Division\n";
cout << "Selection: ";
cin >> selection;
cout << "\n\n\n";
switch(selection)
{
case 1:
cout << "The sum of " << a << " and " << b << " is " << a+b << endl;
break;
case 2:
cout << "The difference of " << a << " and " << b << " is " << a-b << endl;
break;
case 3:
cout << "The product of " << a << " and " << b << " is " << a*b << endl;
break;
case 4:
cout << "The quotient of " << a << " and " << b << " is " << a/b << endl;
break;
case 5:
cout << "The remainder of " << a << " and " << b << " is " << a%b << endl;
break;
default:
cout << "Invalid selection\n";
}
return 0;
}

