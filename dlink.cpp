#include <iostream>
#include "dlink.h"
#include "source.cpp"
using namespace std;
template<typename U>
class NEW_LIST : public List<U>
{

};
int main(int argc, char* argv[])
{
    NEW_LIST<unsigned char> lst;
    char c;
    while((c = cin.get()) != '\n')
    {
        lst.push_back(c);
    }
    int s = lst.GetSize();
    if (s%2 !=0)
    {
        int c = (s/2);
        lst.removeAt(c);
    }
    int d = lst.GetSize();
    for(int i = 1; i != d-1; i++)
    {
        lst.insert(lst[d-1], i);
        lst.removeAt(d);
        if (i%2 == 1)
            i++;
    }
    for (int i = 0; i < lst.GetSize(); i++)
    {
        cout << lst[i];
    }
    lst.clear();
    return 0;
}

