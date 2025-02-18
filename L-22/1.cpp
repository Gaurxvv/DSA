#include <iostream>
using namespace std;
//-------------------------------> upper to lowercase
char toLowerCase(char c)
{
    if (c >= 'a' && c <= 'z')
    {
        return c;
    }
    else
    {
        char temp = c - 'A' + 'a';
        return temp;
    }
}

//-------------------------------> length of string
int getLength(char arr[])
{
    int count = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
//-------------------------------> reverse of string
void reverse(char arr[], int n)
{
    int s = 0, e = n - 1;
    while (s < e)
    {
        swap(arr[s++], arr[e--]);
    }
}
//-------------------------------> Palindrome string
bool palindrome(char arr[], int n)
{
    int s = 0, e = n - 1;
    while (s <= e)
    {
        if (toLowerCase(arr[s]) != toLowerCase(arr[e]))
        {
            return 0;
        }
        else
        {
            s++;
            e--;
        }
    }
    return 1;
}

int main()
{
    char name[20];
    cout << "Enter your name: " << endl;
    cin >> name;
    int len = getLength(name);
    cout << "Char Length is " << len << endl;
    reverse(name, len);
    int check = palindrome(name, len);
    cout << "check palindrome: " << check << endl;
    //  name[2] = '\0';
    cout << "Your name is " << name << endl;
}