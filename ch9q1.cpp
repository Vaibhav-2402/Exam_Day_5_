#include<iostream>
using namespace std;
/////////////////////////////////

const int len = 40;

class publication
{
    private:
    char tittle[len];
    float price;
    public:
    void get_data()
    {
        cout<<"\n Enter the tittle of the book : "; cin>>tittle;
        cout<<"\n Enter the price : "; cin>>price;
    }
    void put_data()
    {
        cout<<"\n Tittle : "<<tittle;
        cout<<"\n Price = "<<price;
    }

};
////////////////////////////////////////////

class book : public publication
{
    private:
    int count;
    public:
    book() : publication()
    {}
    void get_data()
    {
        publication::get_data();
        cout<<"\n Enter the page count of the book : "; cin>>count;
    }
    void put_data()
    {
        publication::put_data();
        cout<<"\n Page count of the book is : "<<count;
    }

};
//////////////////////////////////////////////////////////////////

class tape : public publication
{
    private:
    float minutes;
    public:
    tape() : publication()
    {}
    void get_data()
    {
        publication::get_data();
        cout<<"\n Enter the running minuttes of tape : "; cin>>minutes;
    }
    void put_data()
    {
        publication::put_data();
        cout<<"\n Running time of book = "<<minutes;
    }
};
///////////////////////////////////////////////////////////////////////////////

int main()
{
    book b1;
    tape t1;
    b1.get_data();
    t1.get_data();
    b1.put_data();
    t1.put_data();
    return 0;
}