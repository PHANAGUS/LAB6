#include<iostream>
using namespace std;

int main()
{
    int num;
    int even=0, odd=0;
    while(num != 0)
    {
        cout << "Enter an integer: ";
        cin >> num;
        if(num == 0)
        {
            cout << "#Even numbers = " << even << endl;
            cout << "#Odd numbers = " << odd << endl;
        }
        else
        {
            if(num%2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
    }
    
    return 0;
}
