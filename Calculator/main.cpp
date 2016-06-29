#include <iostream>

using namespace std;

int main()
{
    bool cont = true;
    double x, y, ans;
    char response, p;
   
    cout << "Hello there. I am a simple calculator." << endl
        << "I can only compute two numbers at a time," << endl
        << "so please be careful not to break me." << endl
        << "Thank you. :)" << endl;
   
    while (cont) {
        cout << "What would you like me to calculate?" << endl;
        cout << "Please enter your calculation in this format: x+y or y/z" << endl;
        cin >> x >> p >> y;
        
        switch (p) {
            case '+':
                ans = x + y;
                break;
            case '-':
                ans = x - y;
                break;
            case '*':
                ans = x * y;
                break;
            case '/':
                if (y == 0) {
                    ans = NULL;
                } else { ans = x / y; } 
                break;
            default:
                ans = NULL; 
        }
        
        if (ans == NULL) {
            cout << "Sorry. I can't do that. :(" << endl;
        } else {
            cout << "The answer is........... " << ans << endl;
        }
        
        bool restart = true;
        while (restart) {
            cout << "If you would like to continue, press 'y'" << endl
                << "If you would like to stop, press 'n'" << endl;
            cin >> response;
            if (response == 'n') {
                cont = false;
                restart = false;
            } else if (response == 'y') { 
                restart = false;
            }
        }
    }
   return 0;
}

