#include<iostream.h>
#include<conio.h>
class hospital
{
protected:
char name_of_project[50];
public:
void getdata()
{
cout<<"\t\t\t\tWELCOME\n";
cout<<"\t\t\tHOSPITAL MANAGEMENT SYSTEAM\n";
cout<<"================================================================================";
}
};
class doctor
{
protected:
int doc_id;
char name[50];
char add[50];
int con_no;
char spec[50];
int salary;
public:
void geta()
{
cout<<"\t\t\t DOCTOR DETAILS\n";
cout<<"\t\tenter doc_id,name,add,con_no,spec,salary\n";
cin>>doc_id>>name>>add>>con_no>>spec>>salary;
}
void puta()
{
cout<<"doc_id="<<doc_id<<"\t"<<"name="<<name<<"\t"<<"add="<<add<<"\t"<<"con_no="<<con_no<<"\t"<<"spec="<<spec<<"\t"<<"salary="<<salary<<endl;
cout<<"--------------------------------------------------------------------------------";
}
};
class staff
{
protected:
int staff_id;
char name[50];
int salary;
char dept[50];
public:
void getb()
{
cout<<"\t\t\tSTAFF DETAILS\n";
cout<<"\t\tenter staff_id,name,salary,dept\n";
cin>>staff_id>>name>>salary>>dept;
}
void putb()
{
cout<<"staff_id="<<staff_id<<"\t"<<"name="<<name<<"\t"<<"salary="<<salary<<"\t"<<"dept="<<dept<<endl;
cout<<"--------------------------------------------------------------------------------";
}
};
class department:public doctor,public staff
{
char dept_name[50];
int floar;
char doc_name[50];
int no_rooms;
public:
void accept()
{
cout<<"\t\t\tDEPARTMENT DETAILS\n";
cout<<"\t\tenter dept_name,floar,doc_name,no_rooms\n";
cin>>dept_name>>floar>>doc_name>>no_rooms;
}
void display()
{
cout<<"dept_name="<<dept_name<<"\t"<<"floar="<<floar<<"\t"<<"doc_name="<<doc_name<<"\t"<<"no_rooms="<<no_rooms<<endl;
cout<<"--------------------------------------------------------------------------------";
}
};
class patient
{
protected:
int p_id;
char name[50];
char add[50];
int con_no;
char treated_by[50];
public:
void getdataA()
{
cout<<"\t\t\tPATIENT DETAILS\n";
cout<<"\t\tenter p_id,name,add,con_no,treated_by\n";
cin>>p_id>>name>>add>>con_no>>treated_by;
}
};
class bill:public patient
{
protected:
int room_bill,ICU_bill,medical_bill;
int total_bill;
public:
void accept()
{
cout<<"\t\t\tBILL DETAILS\n";
cout<<"\t\tenter room_bill,ICU_bill,medical_bill\n";
cin>>room_bill>>ICU_bill>>medical_bill;
}
void displayB()
{
cout<<"room_bill="<<room_bill<<"\t"<<"ICU_bill="<<ICU_bill<<"\t"<<"medical_bill="<<medical_bill<<endl;
}
void displayA()
{
cout<<"p_id="<<p_id<<"\t"<<"name="<<name<<"\t"<<"add="<<add<<"\t"<<"con_no="<<con_no<<"\t"<<"treated_by="<<treated_by<<endl;
cout<<"--------------------------------------------------------------------------------";
}
void calculate()
{
total_bill=room_bill+ICU_bill+medical_bill;
cout<<"\ntotal_bill="<<total_bill;
cout<<"\n================================================================================";
cout<<"\t\t\t\tthank you\n";
}
};
void main()
{
clrscr();
hospital a;
a.getdata();
department d;
d.geta();
d.getb();
d.accept();
d.puta();
d.putb();
d.display();
bill b;
b.getdataA();
b.displayA();
b.accept();
b.displayB();
b.calculate();
getch();
}







