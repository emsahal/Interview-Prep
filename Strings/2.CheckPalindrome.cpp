#include <iostream>
using namespace std;

int main()
{
    string palindrome = "LEVEL";
    bool isPalindrome = true;
    for (int i = 0; i < palindrome.length() / 2; i++)
    {
        if (palindrome[i] != palindrome[palindrome.length() - 1 - i])
        {
            isPalindrome = false;
            break;
        }
    }
    if (isPalindrome)
    {
        cout << palindrome << " is Palindrome.";
    }
    else
    {
        cout << palindrome << " is not a Palindrome.";
    }
}