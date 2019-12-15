//***Md. Tufazzal Hosen Tusar
//***ID:191-15-2443
//HOSPITAL SEAT MANAGEMENT SYSTEM

#include <bits/stdc++.h>
#include<conio.h>
using namespace std;

bool check = true;
struct node
{
     char name[30];
     int SeatNo;
     char DiseaseName[30];
     node *next;
}*head,*lastptr;

void add()
{
     node *p;
     p=new node;
     cout<<"Enter name of Patient:"<<endl;
     gets(p->name);
     fflush(stdin);
     cout<<"Enter Sit Number of Patient:"<<endl;
     cin>>p->SeatNo;
     fflush(stdin);
     cout<<"Enter Disease Name of Patient:"<<endl;
     cin>>p->DiseaseName;
     fflush(stdin);
     p->next=NULL;

     if(check)
     {
      head = p;
      lastptr = p;
      check = false;
 }
 else
 {
      lastptr->next=p;
      lastptr=p;
 }
 cout<<endl<<"Recored Entered";
 getch();
}
void modify()
{
     node *ptr;
     node *prev=NULL;
     node *current=NULL;
     int Seat_no;
     cout<<"Enter Seat Number to search:"<<endl;
     cin>>Seat_no;
     prev=head;
     current=head;
     while(current->SeatNo!=Seat_no)
 {
      prev=current;
      current=current->next;
 }
     ptr=new node;
     fflush(stdin);
     cout<<"Enter name of Patient:"<<endl;
     gets(ptr->name);
     fflush(stdin);

     cout<<"Enter Seat Number of Patient:"<<endl;
     cin>>ptr->SeatNo;
     fflush(stdin);
     cout<<"Enter Disease Name of Patient:"<<endl;
     cin>>ptr->DiseaseName;
     fflush(stdin);
     prev->next=ptr;
     ptr->next=current->next;
     current->next=NULL;
     delete current;
     cout<<endl<<"Recored Modified";
     getch();
}
void search()   //searches record of seat number//
{
     node *prev=NULL;
     node *current=NULL;
     int Seat_no;
     cout<<"Enter Seat Number to search:"<<endl;
     cin>>Seat_no;
     prev=head;
     current=head;
     while(current->SeatNo!=Seat_no)
     {
      prev=current;
      current=current->next;
     }
     cout<<"\nname: ";
     puts(current->name);
     cout<<"\nSeat No:";
     cout<<current->SeatNo;

     cout<<"\nDisease Name:";
     cout<<current->DiseaseName;
     getch();
}
//deletes record of a Seat number
void del()
{
     node *ptr=NULL;
     node *prev=NULL;
     node *current=NULL;
     int Seat_no;
     cout<<"Enter Sit Number to Delete:"<<endl;
     cin>>Seat_no;
     prev=head;
     current=head;
     while(current->SeatNo!=Seat_no)
     {
      prev=current;
      current=current->next;
     }
     prev->next = current->next;
     current->next=NULL;
     delete current;
     cout<<endl<<"Recored Deleted";
     getch();
}

int main()
{
     char x;

     cout<<"\t\t ****HOSPITAL SEAT MANAGEMENT SYSTEM**** \t\t\t"<<endl;


     cout<<"\n\nPress Any Key To Continue . . . ."<<endl;
     getch();
 do
 {
      system("cls");
      cout<<"Press '1' to add New record:"<<endl;
      cout<<"Press '2' to search a record:"<<endl;
      cout<<"Press '3' to modify a record:"<<endl;
      cout<<"Press '4' to delete a record:"<<endl;
      cout<<"Press '5' to exit:"<<endl;
      x=getch();
      if(x=='1')
      {
           system("cls");
           add();
      }
      else if(x=='2')
      {
           system("cls");
           search();
      }
      else if(x=='3')
      {
           system("cls");
           modify();
      }
      else if(x=='4')
      {
           system("cls");
           del();
      }
      else if(x=='5')
      {
        exit(0);
      }
      else
      {

      }
     }while(x != 200);
     getch();
}
