#include <iostream>
#include <set>
#include <iterator>
using namespace std;
// displaying a set
void display(set<int> s)
{
    set<int>::iterator itr; // declaring an iterator
    for (itr = s.begin(); itr != s.end(); itr++)
    {
        cout << *itr << " ";
    }
}
// reversing a set
void reverse(set<int> s)
{
    set<int>::reverse_iterator itr; // reversing an iterator
    for (itr = s.rbegin(); itr != s.rend(); itr++)
    {
        cout << *itr << " ";
    }
}
int main()
{
    set<int> s;
    // inserting values in the set
    s.insert(10);
    s.insert(40);
    s.insert(30);
    s.insert(20);
    display(s);
    cout << endl;
    reverse(s);
    return 0;
}