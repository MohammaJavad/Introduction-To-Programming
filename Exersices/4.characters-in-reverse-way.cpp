/*Write a C program to print the following characters in a reverse way.  
Test Characters: 'X', 'M', 'L'  
Expected Output:  
The reverse of XML is LMX */

#include <iostream>
using namespace std;

main()
{
    
    string Text;
    cin>>Text;
    reverse(Text.begin(), Text.end());
    cout << "Reversed string: " << Text << endl;

}
