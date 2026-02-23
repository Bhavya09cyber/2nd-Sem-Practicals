#include<iostream>
using namespace std;
class rectangle{
    float l,w;
public:
  void input(){

    cout<<"Enter the length and width of rectangle  ";
    cin>>l>>w;

  }
  void area(){
    float a;
    a=l*w;

  }
 void perimeter(){
    float b;
    b=2*(l+w);

 }
 void display(){
      cout<<"The area is:"<<l*w<<endl;
    cout<<"The perimater is :"<<2*(l+w);
 }

};
int main(){
 rectangle r[100];
 int n;
 cout<<"enter the no.of rectangle";
 cin>>n;
 for(int i=0;i<=n;i++){
 r[i].input();
 r[i].area();
 r[i].perimeter();
 r[i].display();
 }
 return 0;
}
