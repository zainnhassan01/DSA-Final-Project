#include<iostream>
#include<string>
#include<stdlib.h>
#include<queue>
using namespace std;
int count=0;
class packagedetails
{
public:
int p_id; //package id
short speed;
bool downloads;
short price;
bool smarttv;
bool landline;
packagedetails* next;
packagedetails(short speed,bool downloads,short price,int p_id,bool landline,bool smarttv)
{
    count += 1;
    this->p_id = p_id;
    this->speed = speed;
    this->downloads = downloads;
    this->price = price;
    this->smarttv = smarttv;
    this->landline = landline;
    next = NULL;

}
packagedetails(int p)
{
        this->p_id = p;
        if(p == 1)
        {
        this->speed = 10;
        this->downloads = true;
        this->price = 1500;
        this->landline = false;
        this->smarttv = false;
        }
        if(p == 2)
        {
        this->speed = 15;
        this->downloads = true;
        this->price = 2000;
        this->landline = true;
        this->smarttv = false;
        }
        if(p == 3)
        {
        this->speed = 20;
        this->downloads = true;
        this->price = 2600;
        this->landline = true;
        this->smarttv = true;
        }
        if(p_id == 4)
        {
        this->speed = 25;
        this->downloads = true;
        this->price = 4000;
        this->landline = true;
        this->smarttv = true;
        }
        next = NULL;
}
};
class user
{
    public:
    string city;
    string username;
    string pass;
    string name;
    string cnic;
    string mail;
    short p_id;
    short speed;
    bool downloads;
    short price;
    bool smarttv;
    bool landline;
    user* next;
    user(string c,string username,string pass,string name,string cnic,string mail,int p)
    {
        this->city = c;
        this->username = username;
        this->pass = pass;
        this->name = name;
        this->cnic = cnic;
        this->mail = mail;
        this->p_id = p;
        if(p == 1)
        {
        this->speed = 10;
        this->downloads = true;
        this->price = 1700;
        this->landline = false;
        this->smarttv = false;
        }
        if(p == 2)
        {
        this->speed = 15;
        this->downloads = true;
        this->price = 2000;
        this->landline = true;
        this->smarttv = false;
        }
        if(p == 3)
        {
        this->speed = 20;
        this->downloads = true;
        this->price = 2600;
        this->landline = true;
        this->smarttv = true;
        }
        if(p_id == 4)
        {
        this->speed = 25;
        this->downloads = true;
        this->price = 4000;
        this->landline = true;
        this->smarttv = true;
        }
        next = NULL;
    }
};
void newpackageinsert(packagedetails* &head,short speed, bool downloads, short price,int p_id,bool landline,bool smarttv)
{
    packagedetails* newpackage = new packagedetails(speed,downloads,price,p_id,landline,smarttv);
    if(head == NULL)
    {
        head = newpackage;
        return;
    }
    packagedetails* temp = head;
    while(temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next = newpackage;
}
void displaypackages(packagedetails* &head)
{
    packagedetails* temp = head;
    cout<<"Total Packages = "<<count;
    while(temp != NULL)
    {
        cout<<"\n---------------------------\n";
        cout<<"Package number = "<<temp->p_id<<endl;
        cout<<"Price = Rs."<<temp->price<<endl;
        cout<<"Unlimited Downloads = "<<temp->downloads<<endl;
        cout<<"Speed = "<<temp->speed<<" mbps "<<endl;
        cout<<"Smart TV = "<<temp->smarttv<<endl;
        cout<<"Landline = "<<temp->landline<<endl;
        temp = temp->next;
    }
    cout<<endl;
}
void insertuser(user* &head,string c,string username,string pass,string name,string cnic,string mail,int pid)
{
    user* newuser = new user(c,username,pass,name,cnic,mail,pid);
    if(head == NULL)
    {
        head = newuser;
        return;
    }
    user* temp = head;
    while(temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next = newuser;
}
void displayUserDetails(user* &head,string name,string pass)
{
  user* temp = head;
  while(temp!=NULL)
  {
    if(temp->username == name)
    {
        if(temp->pass == pass)
    {
    cout<<"Name = "<<temp->name<<endl;
    cout<<"CNIC = "<<temp->cnic<<endl;
    cout<<"City = "<<temp->city<<endl;
    cout<<"Email Address = "<<temp->mail<<endl;
    cout<<"Connection Details\n";
    cout<<"Speed = "<<temp->speed<<endl;
    cout<<"Unlimited Downloads = "<<temp->downloads<<endl;
    cout<<"Charges = "<<temp->price<<endl;
    cout<<"Smart TV = "<<temp->smarttv<<endl;
    cout<<"Landline = "<<temp->landline<<endl;
    cout<<endl;
    }
    }
    temp = temp->next;
  }
  cout<<endl;
}
bool checkpass(user* &head,string u,string p)
{
    user* temp = head;
    while(temp!=NULL)
    {
        if(temp->username == u)
        {
            cout<<"Username Found\n";
            if(temp->pass == p)
            {
                cout<<"Password Matched\n";
                cout<<"Login Successfull";
                return 1;
            }
        }
        temp = temp->next;
    }
    cout<<"Wrong Username or Password. Enter Again\n";
    return 0;
    
}
void registernew(user* &head,packagedetails* heads)
{
    int p_id;
    string city;
    string username;
    string pass;
    string name;
    string cnic;
    string mail;
    string cities[6] = {"Islamabad","Lahore","Karachi","karachi","lahore","islamabad"}; 
    bool a = false;
    cout<<"Registration\nWelcome\n";
   do{ 
    a = false;
    cout<<"Choose your City \n";
    for(int i=0;i<3;i++)
    {
        cout<<cities[i]<<"  ";
    }
    cout<<"\nCity = ";
    cin>>city;
    for(int i=0;i<6;i++)
    {
        if(city == cities[i])
        {
            a = true;
            break;
        }
    }
   }while(!a);
    cout<<"Username = ";
    cin>>username;
    cout<<"Password = ";
    cin>>pass;
    cin.ignore();
    cout<<"Full Name = ";
    getline(cin,name);
    cout<<"National Identity Card Number = ";
    cin>>cnic;
    cout<<"Email Address = ";
    cin>>mail;
    cout<<"Select A Package\n";
    displaypackages(heads);
    cout<<"Choose A Package = ";
    cin>>p_id;
    cout<<"Account Created.\n";
    insertuser(head,city,username,pass,name,cnic,mail,p_id); 
}
void changepackage(user* &head,string name,string p)
{
    int pnum;
    cout<<"Enter the Package = ";
    cin>>pnum;
    user* temp = head;
    while(temp!=NULL)
    {
    if(temp->username == name)
    {
        if(temp->pass == p)
        {
            if(pnum == 1)
            {
            temp->speed = 10;
            temp->downloads = true;
            temp->price = 1700;
            temp->landline = false;
            temp->smarttv = false;
            }
            if(pnum == 2)
            {
            temp->speed = 15;
            temp->downloads = true;
            temp->price = 2000;
            temp->landline = true;
            temp->smarttv = false;
            }
            if(pnum == 3)
            {
            temp->speed = 20;
            temp->downloads = true;
            temp->price = 2600;
            temp->landline = true;
            temp->smarttv = true;
            }
            if(pnum == 4)
            {
            temp->speed = 25;
            temp->downloads = true;
            temp->price = 4000;
            temp->landline = true;
            temp->smarttv = true;
            }
        }
    }
        temp = temp->next;
  }
  cout<<"Package Change Success!\n";
}
void deleting_acc(user* &head,string name,string p)
{
    user* temp = head;
    if(temp != NULL && temp->username == name && temp->pass == p)
    {
            head  = temp->next;
            delete temp;
                cout<<"Account Delete Successfull\n";
            return;
        }
        if(temp == NULL)
        {
                head = temp->next;
                 delete temp;
                cout<<"Account Delete Successfull\n";
    }
    while(temp != NULL && temp->next != NULL)
    {
    if(temp->next->username == name && temp->next->pass == p)
    {
    user* del = temp->next;
    temp->next = temp->next->next;
    delete del; 
    cout<<"Account Delete Successfull\n";
    return;       
    } 
    temp = temp->next;
    }
}
void allusersdisplay(user* &head) //for admin usage
{
    user* temp = head;
    while(temp!=NULL)
    {
    cout<<"Name = "<<temp->name<<endl;
    cout<<"CNIC = "<<temp->cnic<<endl;
    cout<<"City = "<<temp->city<<endl;
    cout<<"Email Address = "<<temp->mail<<endl;
    cout<<"Connection Details\n";
    cout<<"Speed = "<<temp->speed<<endl;
    cout<<"Unlimited Downloads = "<<temp->downloads<<endl;
    cout<<"Charges = "<<temp->price<<endl;
    cout<<"Smart TV = "<<temp->smarttv<<endl;
    cout<<"Landline = "<<temp->landline<<endl;
    cout<<endl;
    temp = temp->next;
    }
}
void deletepackage(packagedetails* head)
{
    int pid;
    cout<<"Package ID to Delete = ";
    cin>>pid;
    packagedetails* temp = head;
    if(temp != NULL && temp->p_id == pid)
    {
            head  = temp->next;
            delete temp;
            cout<<"Package Delete Successfull\n";
            return;
    }
    while(temp != NULL && temp->next != NULL)
    {
    if(temp->next->p_id == pid)
    {
    packagedetails* del = temp->next;
    temp->next = temp->next->next;
    delete del; 
    cout<<"Package Delete Successfull\n";
    return;       
    } 
    temp = temp->next;
    }
}
void addpackage(packagedetails* head)
{
    int pid;
    short speed;
    bool downloads;
    short price;
    bool landline;
    bool smarttv;
    cout<<"Enter the Package ID = ";
    cin>>pid;
    cout<<"Speed = ";
    cin>>speed;
    cout<<"Unlimited Downloads(Enter True or False) = ";
    cin>>downloads;
    cout<<"Price = ";
    cin>>price;
    cout<<"Landline Available(Enter True or False) = ";
    cin>>landline;
    cout<<"Smart TV Available(Enter True or False) = ";
    cin>>smarttv;
    newpackageinsert(head,speed,downloads,price,pid,landline,smarttv);
}
queue<bool> usererror;
void usercomplain()
{
    usererror.push(1);
}
void resolveerrors()
{
    while(!usererror.empty())
    {
        cout<<"resolving complain...\n";
        usererror.pop();
        cout<<"complain resolved success...\n";
    }
    cout<<"All Complains Resolved\n";
}
void edit_pacakges(packagedetails* &head,int pid)
{
    cout<<"Edit Package Info\n";
    short speed;
    bool downloads;
    short price;
    bool landline;
    bool smarttv;
    cout<<"Speed = ";
    cin>>speed;
    cout<<"Unlimited Downloads(Enter True or False) = ";
    cin>>downloads;
    cout<<"Price = ";
    cin>>price;
    cout<<"Landline Available(Enter True or False) = ";
    cin>>landline;
    cout<<"Smart TV Available(Enter True or False) = ";
    cin>>smarttv;
    packagedetails* temp = head;
    while(temp!=NULL)
    {
        if(pid == temp->p_id)
        {
        temp->speed = speed;
        temp->downloads = downloads;
        temp->price = price;
        temp->smarttv = smarttv;
        temp->landline = landline;
        return;
        }
        temp = temp->next;
    }
    cout<<"Package ID Not Found\n";
}
void admin(user* &head,packagedetails* &heads)
{
    char c;
    int ch;
    s:
    do{
    cout<<"Admin Login Success\n";
    cout<<"Press 1 to See Users Info\nPress 2 to Delete User\n";
    cout<<"Press 3 for Package Information\nPress 4 to Edit Packages\n";
    cout<<"Press 5 to Add New Package\nPress 6 to Delete Package\n";
    cout<<"Press 7 to Resolve Complains\n";
    cin>>ch;
    switch (ch)
    {
    case 1:
    {
        allusersdisplay(head);
        break;
    }
    case 2:
    {
        string usrname;
        string p;
        cout<<"Enter the Username = ";
        cin>>usrname;
        cout<<"Enter the Password of User = ";
        cin>>p;
        deleting_acc(head,usrname,p);           //delete a user
        break;
    }
    case 3:
    {
        displaypackages(heads);
        break;
    }
    case 4:
    {
        int i;
        cout<<"Select a Package = ";
        cin>>i;
        edit_pacakges(heads,i); //edit packages
        break;
    }
    case 5:
    {
        cout<<"Add a New Package\n";
        addpackage(heads);          //add a new package
        break;
    }
    case 6:
    {
        deletepackage(heads);//delete a package
        cout<<"Package Delete Successfull\n";
        break;
    }
    case 7:
    {
        resolveerrors();
        break;
    }
    default: 
    {
    cout<<"Wrong choice.\n";
    goto s;
    }    
    }
    cout<<"Continue[Y/N]\n";
    cin>>c;
}while( c!='Y' || c!='y');
}
void homepage()
{
    cout<<"Welcome to Nayatel Internet Service Home Page.\n"<<
     "Click on the link to enter our website.\nhttps://nayatel.com/ \n";
}
int main()
{
user* head = NULL;
packagedetails* heads = NULL;
string a;
string b= "***";
char ch;
newpackageinsert(heads,10,true,1700,1,false,false);
newpackageinsert(heads,15,true,2000,2,true,false);
newpackageinsert(heads,20,true,2600,3,true,true);
newpackageinsert(heads,25,true,4000,4,true,true);
insertuser(head,"Islamabad","zainhassan","123","Muhammad Zain","31812983183909","muhammadzain@gmail.com",1);
insertuser(head,"Islamabad","mohsinmurtaza","567","Mohsin Murtaza","8424289428124","mohsinmurtaza@gmail.com",2);
insertuser(head,"Karachi","notsaju","987","Syed Sajjad Ali Shah Naqvi Bukhari","240901309910","sajjadali@gmail.com",3);
insertuser(head,"Lahore","aimanmanzoor","666","Aiman Manzoor","428413109301","aimanmanzoor@gmail.com",4);
usercomplain();
usercomplain();
usercomplain();
cout<<"WELCOME TO NAYATEL DIRECTORY \n";
cout<<"Let's Go!\nPress any key to continue";
cin>>a;
if(a == b)
{
     admin(head,heads); //call for admin
}
siu:
do{
cout<<"Don't have an account? Sign Up [y/n]\n";
cin>>ch;
if(ch == 'y' || ch == 'Y')
{
    registernew(head,heads);// call for registration
    goto siu;
}
}while(ch!='Y' && ch!='y' && ch!='N' && ch!='n');
string username;
string pas;
bool password;
do{
cout<<"Login Portal : \n";
cout<<"Username = ";
cin>>username;
cout<<"Password = ";
cin>>pas;
password = checkpass(head,username,pas);
}while(password != 1);
cout<<endl;
system("CLS");
char chr;
hehe:
do{
        int choice;
        cout<<"Press 1 for Home Page.\n";
        cout<<"Press 2 for Connection Details.\n";
        cout<<"Press 3 for Packages Information\n";
        cout<<"Press 4 to Update Package\n";
        cout<<"Press 5 to Delete Account\n";
        cout<<"Press 6 for Complain\n";
        cout<<"Press 7 to Log Out\n";
        cin>>choice;
        switch(choice)
        {
            case 1:
            {
                homepage();
             break;
            }
             case 2:
            {
                displayUserDetails(head,username,pas);
                break;
            }
             case 3:
            {
                displaypackages(heads);
              break;
            }
             case 4:
             {
                displaypackages(heads);
                changepackage(head,username,pas);
                break;
             }
             case 5:
             {
                deleting_acc(head,username,pas);
                goto siu;
                break;
             }
             case 6:
             {
                usercomplain();
                cout<<"Grouch file Successful Booyah \n";
                break;
             }
             case 7:
             {
                goto siu;
                break;
             }
            default: 
            {
            cout<<"Wrong choice.\n";
            goto hehe;
            }
        }
        cout<<"Continue[Y/N]";
        cin>>chr;
}while(chr =='y' || chr == 'Y');

    return 0;
}