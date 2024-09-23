#include <iostream>
using namespace std;

class Array
{
    int *data;
    int size;

public:
    Array()
    {
    }
    Array(int n)
    {
        size = n;
        data = new int[size];
    }
    ~Array()
    {
        delete[] data;
    }

    void array_adt_menu()
    {
        int x;

        cout << "ARRAY ADT MENU" << endl;
        cout << "Select Option:" << endl;
        cout << "0. EXIT" << endl;
        cout << "1. Show All Elements" << endl;
        cout << "2. Get an Element" << endl;
        cout << "3. Delete an Element" << endl;
        cout << "4. Insert Value at Given Index" << endl;
        cout << "5. Search Value in Array" << endl;
        cout << "6. Sort Value in Array" << endl;
        cout << "7. Reverse Value in Array" << endl;
        cout << "Enter Option: ";
        cin >> x;

        switch (x)
        {
        case 1:
            show_all_elements();
            break;
        case 2:
            get_element_in_array();
            break;
        case 3:
            delete_element_from_array();
            break;
        case 4:
            insert_element_at_index();
            break;
        case 5:
            search_element_in_array();
            break;
        case 6:
            sort_array();
            break;
        case 7:
            reverse_element_in_array();
            break;
        default:
            cout << "Exiting" << endl;
        }
    }

    void insert_elements_in_array()
    {
        cout << "Enter " << size << " elements:" << endl;
        for (int i = 0; i < size; i++)
        {
            int e;
            cin >> e;
            data[i] = e;
        }
        show_all_elements();
    }

    void show_all_elements()
    {
        cout << "Elements are:" << endl;
        for (int i = 0; i < size; i++)
        {
            cout << data[i] << endl;
        }
        array_adt_menu();
    }

    void get_element_in_array()
    {
        int index;
        cout << "Enter an element index to get it - ";
        cin >> index;
        if (index > size)
        {
            cout << "Size of array is - " << size << endl;
        }
        else
        {
            cout << data[index - 1] << endl;
        }
    }

    void delete_element_from_array()
    {
        int index;
        cout << "Enter an element index to delete - ";
        cin >> index;
        if (index > size)
        {
            cout << "Size of array is - " << size << endl;
        }
        else
        {
            index--;
            for (int i = index; i < size; i++)
            {
                data[i] = data[i + 1];
            }
            size--;
        }
        show_all_elements();
    }

    void insert_element_at_index()
    {
        int e, index;
        cout << "Enter an element - ";
        cin >> e;
        cout << "Enter index - ";
        cin >> index;
        if (index > size)
        {
            cout << "Size of array is - " << size << endl;
        }
        else
        {
            index--;
            size++;
            for (int i = size - 1; i >= index; i--)
            {
                data[i] = data[i - 1];
            }
            data[index] = e;
        }
        show_all_elements();
    }

    void search_element_in_array()
    {
        int e, flag = -1;
        cout << "Enter an element to search - ";
        cin >> e;
        for (int i = 0; i < size; i++)
        {
            if (data[i] == e)
            {
                flag = i;
                break;
            }
        }
        if (flag == -1)
        {
            cout << "Element not in array" << endl;
        }
        else
        {
            cout << "Element found at index - " << flag + 1 << endl;
        }
    }

    void sort_array()
    {
        for (int i = 0; i < size - 1; i++)
        {
            for (int j = i + 1; j < size; j++)
            {
                cout << "HI" << endl;
                if (data[i] > data[j])
                {
                    int temp = data[i];
                    data[i] = data[j];
                    data[j] = temp;
                }
            }
        }
        show_all_elements();
    }

    void reverse_element_in_array()
    {
        show_all_elements();
    }
};

int main()
{
    int x;
    Array obj(4);

    cout << "ARRAY ADT MENU" << endl;
    cout << "Select Option:" << endl;
    cout << "0. EXIT" << endl;
    cout << "1. Insert Element" << endl;
    cout << "2. Show All Elements" << endl;
    cout << "3. Get an Element" << endl;
    cout << "4. Delete an Element" << endl;
    cout << "5. Insert Value at Given Index" << endl;
    cout << "6. Search Value in Array" << endl;
    cout << "7. Sort Value in Array" << endl;
    cout << "8. Reverse Value in Array" << endl;
    cout << "Enter Option: ";
    cin >> x;

    switch (x)
    {
    case 1:
        obj.insert_elements_in_array();
        break;
    case 2:
        obj.show_all_elements();
        break;
    case 3:
        obj.get_element_in_array();
        break;
    case 4:
        obj.delete_element_from_array();
        break;
    case 5:
        obj.insert_element_at_index();
        break;
    case 6:
        obj.search_element_in_array();
        break;
    case 7:
        obj.sort_array();
        break;
    case 8:
        obj.reverse_element_in_array();
        break;
    default:
        cout << "Exiting" << endl;
    }
    return 0;
}