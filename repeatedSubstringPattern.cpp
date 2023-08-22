#include <iostream>
using namespace std;

bool Checkduplicate(string str, int size)
{
    string s = str.substr(0, size);
    int i = 0;
    while (i < str.size())
    {
        if (s != str.substr(i, size))
            return (false);
        i += size;
    }
    return (true);
}

bool repeatedSubstringPattern(string s) {

    for (int i = 1; i < s.size(); i++)
    {
        if (Checkduplicate(s, i) == true)
            return(true);
    }
    return(false);
}

int main()
{
    bool r;

    r =  repeatedSubstringPattern("aaaaa");
    if (r == true)
        cout << "true" <<endl;
    else
        cout << "false" << endl;
}



/*

bab bab bab 

*/