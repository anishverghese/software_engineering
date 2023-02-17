#include <iostream>
using namespace std;
#include <fstream>

int main()
{
    fstream st;
    st.open("E:\\anish5.txt", ios::out); // write mode
    if (!st)
        cout << "No file";

    else
    {
        st << "Hi friends,I am Anish";
        // position
        cout << "pointer :" << st.tellp() << endl;
        st.close();
    }

    st.open("E:\\anish5.txt", ios::in); // read mode
    if (!st)
        cout << "No file";

    else
    {
        cout << "pointer : " << st.tellg() << endl;
        // read

        char ch;
        while (!st.eof())
        {
            cout << "Position " << st.tellg();
            st >> ch;
            cout << "character : " << ch << endl;
        }
    }
    return 0;
}
