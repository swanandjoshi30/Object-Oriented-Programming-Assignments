#include<iostream>
using namespace std;
class Publication{
    protected:
        string title;
        float price;
    public:
        void add(){
            cout<<"Enter Publication details: "<<endl;
            cout<<"Enter title of the publication: "<<endl;
            cin>>title;
            cout<<"Enter the price of the publication: "<<endl;
            cin>>price;
        }
        void disp(){
            cout<<"The name of the publication is : "<<title<<endl;
            cout<<"The price of the publication is : "<<price<<endl;
        }
};
class Book:public Publication{
    public:
    int page_cnt;
    void get_book()
    {
        add();
        cout<<"Enter the number of pages: "<<endl;
        cin>>page_cnt;
    }
    void disp_book()
    {
        disp();
        cout<<"Page Count: "<<page_cnt<<endl<<endl;
    }
};
class Tape:public Publication{
    public:
        float play_time;
        void get_tape(){
            add();
            cout<<"Enter the play time of the Tape in minutes: "<<endl;
            cin>>play_time;
        }
        void disp_tape(){
            disp();
            cout<<"Play TIme: "<<play_time<<endl<<endl;
        }
        
};
int main(){
    Book b1;
    Tape t1;
    int ch;
    do{
        cout<<"__________________________________________________________"<<endl;
        cout<<"\t\tEnter your choice"<<endl;
        cout<<"\t\t1. Store Book Information"<<endl;
        cout<<"\t\t2. Store Tape Informaion"<<endl;
        cout<<"\t\t3. Display Book Information"<<endl;
        cout<<"\t\t4. Display Tape Information"<<endl;
        //cout<<"_________________________________________________________"<<endl;
        cin>>ch;
        switch(ch)
        {
            case 1:b1.get_book();
                break;
            case 2:t1.get_tape();
                    break;
            case 3:b1.disp_book();
                    break;
            case 4:t1.disp_tape();
                    break;
            default:cout<<"Invalid choice!"<<endl;
        }
    }while(ch!=6);
}
