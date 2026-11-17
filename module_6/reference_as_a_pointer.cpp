// #include<bits/stdc++.h>
// using namespace std;
// void fun (int* p)
// {
//     *p=100;
// }
// int main ()
// {
//     int x=10;
//     int* p=&x;
//     fun (p);
//     cout << *p;
//     return 0;
// }


// 2 ta adala p

// #include<bits/stdc++.h>
// using namespace std;
// void fun (int* p)
// {
//     int y=200;
//     p=&y;
//     cout << "fun function " << *p << endl;
// }
// int main ()
// {
//     int x=10;
//     int* p=&x;
//     fun (p);
//     cout << "main function " << *p <<endl;
//     return 0;
// }

// same p

#include<bits/stdc++.h>
using namespace std;
void fun (int* &p)
{
    p=NULL;
    cout << "fun function " << p << endl;
}
int main ()
{
    int x=10;
    int* p=&x;
    fun (p);
    cout << "main function " << p <<endl;
    return 0;
}