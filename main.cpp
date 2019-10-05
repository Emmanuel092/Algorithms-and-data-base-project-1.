//Unsorted List data structure is represented in memory by a dynamic array
//and implemented as the C++ class List.
#include<iostream>

using namespace std;

int  main()
{
    cout << "\nExperimenting with unsorted list of integer numbers:\n\n";
    List  B(5);      //An empty list B is created. It can store up to 15 items.
    int a1;
    for (int i = 1; i <= 17; i++)
    {
        cout << "Enter int number, -7 to stop ==> ";
        cin >> a1;
        if (a1 != -7)
            B.addItem(a1);
        else    break;       //go outside the loop block
    }

    B.printList();
    B.sumitems();
}//main
