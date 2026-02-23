#include<iostream>
#include<string>
using namespace std;
class Book{
private:
    int bookid;
    string title;
    string author;
    int copies;

public:

    Book(){
        bookid = 0;
        title = "";
        author = "";
        copies = 0;
    }

void getdata()
{
cout<<"enter the bookid:";
cin>>bookid;
cout<<"enter the title:";
cin.ignore();
getline(cin,title);
cout<<"enter the author:";
cin.ignore();
getline(cin,author);
cout<<"enter the copies:";
cin>>copies;


}
     Book(int id,string t,string a,int c){
        bookid=id;
        title=t;
        author=a;
        copies=c;
     }
      void issueBook(){
        if(copies>0){
            copies--;
        }
        else{
            cout<<"Copies Are Not availible!"<<endl;
        }
      }
      void returnbook(){
        copies++;
      }
      void display(){
        cout<<"BOOKID:"<<bookid<<endl;
        cout<<"TITLE:"<<title<<endl;
        cout<<"AUTHOR:"<<author<<endl;
        cout<<"COPIES:"<<copies<<endl;
      }
};
int main(){
  Book b1;
  b1.getdata();
  b1.issueBook();
  b1.display();
  b1.returnbook();
  b1.display();
  return 0;

}
