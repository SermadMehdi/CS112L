#include <iostream>
using namespace std;

class Parity
{
    private:
        int size;
        int *arr;
        int sets;
    public:
    	//Constructor
        Parity()
        {
            size = 0;
            sets = 0;
            arr = new int[size];
        }
//        ~Parity()
//        {
//        	cout<<"Destructed"<<endl;
//		}
        // Function prototype 
        void set(int num);
        void print();
        void deleteNum();
        bool test();
};

int main()
{
    Parity p;
    unsigned short int choice;
    cout << "1.set num\n2.Delete num\n3.Print elements\n4.Test sets\n5.Exit";
    while(1)
    {
        cout << "\n\nChoose: ";
        cin >> choice;
        switch(choice)
        {
            case 1:
                int num;
                cout << "Enter any number\n";
                cin >> num;
                p.set(num);
                break;
            case 2:
                p.deleteNum();
                break;
            case 3:
                p.print();
                break;
            case 4:
                if(p.test() == true)
                    cout << "Even sets\n";
                else
                    cout << "Odd sets\n";
                break;
            case 5:
                return 0;
            default:
                cout << "Select any of the above options\n";

        }
    }

    return 0;

}

void Parity::set(int num)
{
    size++;
    arr[size-1] = num;
    sets++;
}

void Parity::print(void)
{
    for(int i = 0;i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void Parity::deleteNum()
{
    size--;
    int *temp = new int [size];
    for(int i = 0; i < size; i++)
    {
        temp[i] = arr[i];
    }
    delete [] arr;
    arr = temp;
}

bool Parity::test()
{
    if(sets%2==0)
        return true;
    else
        return false;
}
