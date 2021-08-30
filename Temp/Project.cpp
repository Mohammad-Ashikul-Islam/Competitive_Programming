#include<bits/stdc++.h>
using namespace std;
class Book{
    string Title,Writers_name,Edition_number;
    double Price;
    long Quantity;
    public:
        string getTitle() { return Title; }
        string getWriters_name() { return Writers_name; }
        string getEdition_number() { return Edition_number; }
        double getPrice() { return Price; }
        long getQuantity() { return Quantity; }

        string setTitle(string temp) { Title = temp; }
        string setWriters_name(string temp) { Writers_name = temp; }
        string setEdition_number(string temp) { Edition_number = temp; }
        double setPrice(double temp) { Price = temp; }
        long setQuantity(long temp) { Quantity = temp; }
};
class FictionCatagory : public Book{
    string Catagory_name;
    public:
            string getCatagory_name(){ return Catagory_name; }
            string setCatagory_name(string temp){ Catagory_name = temp; }

};
class nonFictionCatagory : public Book{
    string Catagory_name;
    public:
            string getCatagory_name(){ return Catagory_name; }
            string setCatagory_name(string temp){ Catagory_name = temp; }

};
class ComicCatagory : public Book{
    string Catagory_name;
    public:
            string getCatagory_name(){ return Catagory_name; }
            string setCatagory_name(string temp){ Catagory_name = temp; }

};
class Person{
    string Person_name,Phone_number,Address;
    int Book_purchase_number;
public:
    string getPerson_name(){return Person_name;}
    string getPhone_number(){return Phone_number;}
    string getAddress(){return Address;}
    int getBook_purchase_number(){return Book_purchase_number;}

    string setPerson_name(string temp){Person_name=temp;}
    string setPhone_number(string temp){Phone_number=temp;}
    string setAddress(string temp){Address=temp;}
    int setBook_purchase_number(int temp){Book_purchase_number=temp;}


};
int main()
{
    nonFictionCatagory a[3];
    for(int i=0; i<3; i++){
        string s,s1;
        cout << "Enter Title name: ";
        getline(cin,s);
        getchar();
        a[i].setTitle(s);
        cout << "Enter Writers name: ";
        getline(cin,s);
        getchar();
        a[i].setWriters_name(s);
        cout << "Enter Book Edition: ";
        getline(cin,s);
        getchar();
        a[i].setEdition_number(s);
        cout<<"Enter Cost of the Book: ";
        double x;
        cin>>x;
        a[i].setPrice(x);
        cout<<"Enter the numbers of books availabel: ";
        int p;
        cin>>p;
        a[i].setQuantity(p);
    }
    FictionCatagory b[3];
    for(int i=0; i<5; i++){
        string s;
        cout << "Enter Title name: ";
        getline(cin,s);
        getchar();
        b[i].setTitle(s);
        cout << "Enter Writers name: ";
        getline(cin,s);
        getchar();
        b[i].setWriters_name(s);
        cout << "Enter Book Edition: ";
        getline(cin,s);
        getchar();
        b[i].setEdition_number(s);
        cout<<"Enter Cost of the Book: ";
        double x;
        cin>>x;
        b[i].setPrice(x);
        cout<<"Enter the numbers of books availabel: ";
        int p;
        cin>>p;
        b[i].setQuantity(p);
    }
    ComicCatagory c[3];
    for(int i=0; i<5; i++){
        string s;
        cout << "Enter Title name: ";
        getline(cin,s);
        getchar();
        c[i].setTitle(s);
        cout << "Enter Writers name: ";
        getline(cin,s);
        getchar();
        c[i].setWriters_name(s);
        cout << "Enter Book Edition: ";
        getline(cin,s);
        getchar();
        c[i].setEdition_number(s);
        cout<<"Enter Cost of the Book: ";
        double x;
        cin>>x;
        c[i].setPrice(x);
        cout<<"Enter the numbers of books availabel: ";
        int p;
        cin>>p;
        c[i].setQuantity(p);
    }
    Person Customers[5];
    for(int i=0; i<5; i++){
        string s;
        cout << "Enter Name: ";
        getline(cin,s);
        getchar();
        Customers[i].setPerson_name(s);
        cout << "Enter Phone Number: ";
        getline(cin,s);
        getchar();
        Customers[i].setPhone_number(s);
        cout << "Enter Address: ";
        getline(cin,s);
        getchar();
        Customers[i].setAddress(s);
        cout<<"How many books he/she buy : ";
        int f;
        cin>>f;
        Customers[i].setBook_purchase_number(f);
    }
    cout<<"LIST OF THE BOOKS IN THE LIBRERY"<<endl;
    cout<<"Books Catagory : NonFictinoal"<<endl;
    for(int i=0; i<5; i++){
        cout << "Title name: ";
        cout<<a[i].getTitle()<<endl;
        cout << "Writers name: ";
        cout<<a[i].getWriters_name()<<endl;
        cout << "Book Edition: ";
        cout<<a[i].getEdition_number()<<endl;
        cout<<"Cost of the Book: ";
        cout<<a[i].getPrice()<<endl;
        cout<<"Number of books available: ";
        cout<<a[i].getQuantity()<<endl;
    }
    cout<<endl<<endl;
    cout<<"Books Catagory : Fictinoal"<<endl;
    for(int i=0; i<5; i++){
        cout << "Title name: ";
        cout<<b[i].getTitle()<<endl;
        cout << "Writers name: ";
        cout<<b[i].getWriters_name()<<endl;
        cout << "Book Edition: ";
        cout<<b[i].getEdition_number()<<endl;
        cout<<"Cost of the Book: ";
        cout<<b[i].getPrice()<<endl;
        cout<<"Number of books available: ";
        cout<<b[i].getQuantity()<<endl;
    }
    cout<<endl<<endl;
    cout<<"Books Catagory : Comic"<<endl;
    for(int i=0; i<5; i++){
        cout << "Title name: ";
        cout<<c[i].getTitle()<<endl;
        cout << "Writers name: ";
        cout<<c[i].getWriters_name()<<endl;
        cout << "Book Edition: ";
        cout<<c[i].getEdition_number()<<endl;
        cout<<"Cost of the Book: ";
        cout<<c[i].getPrice()<<endl;
        cout<<"Number of books available: ";
        cout<<c[i].getQuantity()<<endl;
    }
    cout<<endl<<endl;
    cout<<"LIST OF PLAYER WHO HAVE DISCOUNT OFFER"<<endl;
    for(int i=0;i<5;i++){
        if(Customers[i].getBook_purchase_number()>=5){
        cout << "Name: ";
        cout<<Customers[i].getPerson_name()<<endl;
        cout << "Phone Number: ";
        cout<<Customers[i].getPhone_number()<<endl;
        cout << "Address: ";
        cout<<Customers[i].getAddress()<<endl;
        cout<<"Amount of books he/she buy : ";
        cout<<Customers[i].getBook_purchase_number()<<endl;
        }
    }
    return 0;
}
