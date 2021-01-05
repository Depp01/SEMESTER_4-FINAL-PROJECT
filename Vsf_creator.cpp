/*
My name: Mohialdeen Alderdery
class: seconde year class
Department: computer engineering
*/
#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;

class Contact{
    protected:
#define Size 100
    struct Node
{
        char name[Size] = {' '};
        char family[Size] = {' '};
        string number;
        string Nickname;
        string Birthday;
        string Gender;
        string Location;
        string Hobby;
        string Sensitivity;
        string Priority;
        string Subject;
        string Notes;
        string Language;
        string Group_Membership;
        string Email_1_Value;
        string Email_2_Value;
        string Phone_1_Value;
        string Phone_2_Value;
        string Phone_3_Value;
        string Phone_4_Value;
        string Organization_1_Name;
        string Organization_1_Title;
        string Organization_1_Department;
        string Organization_1_Location;
        string Organization_1_JobDescription;
        string Website_1_Value;
        Node *next;
        Node *prev;
};
};

class Contacts : public Contact{
    private:
    Node *head;
public:
    Contacts();
    void  Start();//the main function of functions(the main screen)
    void  NewContact(Node*&h);//add new contact
    void  Delete(Node *&h);//delete contact
    void  View(Node*&h);//the main fuction of the (View) functions
    void  View_details(Node*&h);//show details of contacts
    void  View_names(Node*&h);//view only names without details
    void  viewOneContact(Node*&h);//view the details for one contact
    void  Search(Node*&h);//the main function of search
    void  searchByName(Node*&h);//search by writing the first name
    void  SearchByFamily(Node*&h);//search by writing the family name
    void  searchByFirstChar(Node*&h);//search by writing the first Char
    void  searchByChar(Node *&h);//Search by writing any char
    void  searchByNumber(Node*&h);//search by writing the number
    bool  Check(Node*&h,char ch[Size],int z);//Searching help function(checks if the name is exists)
    bool  CheckChar(Node*&h,char ch);//Searching help function(check if the char is exists)
    int   count_contacts(Node*&h);//it's count how many contacts in the linked list
    void  Edit(Node *&h);//edit the contact(s)
    void  ClearName(Node*&h);//this functions clear the first name(Editing help function)
    void  ClearFamily(Node*&h);//this function clear the family name(Editing help function)
};

int main()
{
    cout<< "\n\t\tWELCOME ! !"<<endl;
    cout<< "\n\t******Contacts book******"<<endl;
    Contacts c1; //تعريف كائن للتعامل مع كلاس جهات الأتصال
    c1.Start();
    return 0;
}
Contacts :: Contacts()
{
    head =NULL;
}

void Contacts::Start() //استدعاء دالة البدء الرئيسية
{
    while(true)
    {
        int x;
        cout<< "\n================================\n";
        cout<< "\n1. Add new contact\n2. Search\n3. View All\n4. Delete\n5. Edit\n6. Clear \n7. Exit"<<endl;
        cout<< "\nEnter your choice : ";
        cin>>x;
        switch(x)
        {
        case 1:
            NewContact(*&head); //اضافة جهة اتصال جديدة
            break;
        case 2:
            Search(*&head); //البحث عن جهة اتصال معينة
            break;
        case 3:
            View(*&head); //عرض جهات الأتصال
            break;
        case 4:
            Delete(*&head); //حذف جهة اتصال معينة
            break;
        case 5:
            Edit(*&head); //التعديل علي جهة اتصال معينة
            break;
        case 6:
            system("cls");
            cout<< "\n\t\tWELCOME ! !"<<endl;
            cout<< "\n\t******Contacts book******"<<endl;
            break;
        case 7:
            return ;
        default :
            cout<< "\n Wrong choice ! !\n"; //خيار خأطئ اذا ادخل المستخدم رقم ليس من ضمن الخيارات
        }
    }

}

void Contacts::NewContact(Node* &h) //استدعاء الدالة المسؤولة عن اضافة جهة أتصال
{
    Node* ptr,*ptr1=h;//ptr1 is the moving pointer
    ptr = new(nothrow) Node;//ptr is the pointer which will save the information of the new contact
    if(ptr==0)//check if the node is successfully created
    {
        cout<< "\nError ! !\n";
        return ;
    }
    cout<<"please Enter (none) if you do not want Enter one of the contact Attributes" <<endl;
    cin.ignore();//solves cin.getline problems
    cout<< "\nName   : ";
    cin.getline(ptr->name,Size);//enter the name
    cout<< "Family : ";
    cin.getline(ptr->family,Size);//Enter the family
    cout<< "Phone_1_Value : ";
    cin>>ptr->Phone_1_Value; //Enter the Phone_1_Value
    cout<< "Phone_2_Value : ";
    cin>>ptr->Phone_2_Value; //Enter the Phone_2_Value
    cout<< "Phone_3_Value : ";
    cin>>ptr->Phone_3_Value; //Enter the Phone_3_Value
    cout<< "Phone_4_Value : ";
    cin>>ptr->Phone_4_Value; //Enter the Phone_4_Value
    cout<< "Nickname : ";
    cin>>ptr->Nickname; //Enter the Nickname
    cout<< "Birthday : ";
    cin>>ptr->Birthday; //Enter the Birthday
    cout<< "Gender : ";
    cin>>ptr->Gender; //Enter the Gender
    cout<< "Location : ";
    cin>>ptr->Location; //Enter the Location
    cout<< "Hobby : ";
    cin>>ptr->Hobby; //Enter the Hobby
    cout<< "Sensitivity : ";
    cin>>ptr->Sensitivity; //Enter the Sensitivity
    cout<< "Priority : ";
    cin>>ptr->Priority; //Enter the Priority
    cout<< "Subject : ";
    cin>>ptr->Subject; //Enter the Subject
    cout<< "Notes : ";
    cin>>ptr->Notes; //Enter the Notes
    cout<< "Language : ";
    cin>>ptr->Language; //Enter the Language
    cout<< "Group_Membership : ";
    cin>>ptr->Group_Membership; //Enter the Group_Membership
    cout<< "Email_1_Value : ";
    cin>>ptr->Email_1_Value; //Enter the Email_1_Value
    cout<< "Email_2_Value : ";
    cin>>ptr->Email_2_Value; //Enter the Email_2_Value
    cout<< "Organization_1_Name : ";
    cin>>ptr->Organization_1_Name; //Enter the Organization_1_Name
    cout<< "Organization_1_Title : ";
    cin>>ptr->Organization_1_Title; //Enter the Organization_1_Title
    cout<< "Organization_1_Department : ";
    cin>>ptr->Organization_1_Department; //Enter the Organization_1_Department
    cout<< "Organization_1_Location : ";
    cin>>ptr->Organization_1_Location; //Enter the Organization_1_Location
    cout<< "Organization_1_JobDescription : ";
    cin>>ptr->Organization_1_JobDescription; //Enter the Organization_1_JobDescription
    cout<< "Website_1_Value : ";
    cin>>ptr->Website_1_Value; //Enter the Website_1_Value
    ptr->next=NULL; //makeing the next pointer pointing to NULL
    ptr->prev=NULL; //making the previos pointer pointing to NULL
    if(h==NULL)//if the list is empty
    {
        h=ptr;
        ptr->prev=NULL;//make the previos pointer point to NULL
    }
    else//the list is not empty
    {
        while(ptr1!=NULL) //NULL مدام المؤشر المتحرك يشير الي 
        {
            if(ptr1->name[0]>ptr->name[0]) //لو كان المؤشر الجديد الذي يشير الي الاسم أكبر من المؤشر القديم
            {
                if(ptr1->prev== NULL) //NULL لو كان المؤشر الذي يشير للعنصر السابق يساوي 
                {
                    h=ptr;
                    ptr->next=ptr1;
                    ptr1->prev=ptr;
                    break;
                }
                else //غير ذلك
                {
                    ptr->next=ptr1;
                    ptr->prev=ptr1->prev;
                    ptr1->prev->next=ptr;
                    ptr1->prev=ptr;
                    break;
                }
            }
            else if(ptr1->next==NULL) // NULL غير ذلك في حالة اذا كان المؤشر الذي يشير الي العنصر التالي يساوي 
            {
                ptr1->next=ptr;
                ptr->prev=ptr1;
                break;
            }
            ptr1=ptr1->next;
        }
    }
    cout<< "\nThe new contact has been added successfully.\n";
    return ;
}

void Contacts::View_details(Node * &h) //استدعاء الدالة المسؤولة عن عرض تفاصيل جهة الاتصال
{
    Node *temp=h;
    if(temp==NULL)
    {
        cout<< "\n\tList is empty ! !\n\nThere is no Contacts have been added\n";
        return ;
    }
    short C=1;
    cout<< "\n********The List*******\n";
    while(temp!=NULL)
    {
        cout<< "\nContact Number : "<<C<<endl;
        C++;
        cout<< "\n\tName         : ";
        for(int i=0; i<Size; i++)
            cout<<temp->name[i]; // view contact "name"
        cout<< "\n\tFamily       : ";
        for(int j=0; j<Size; j++)
            cout<<temp->family[j]; // view contact "family name"
        cout<< "\n\tPhone_1_Value : "<<temp->Phone_1_Value; // view contact "Phone_1_Value"
        cout<< "\n\tPhone_2_Value : "<<temp->Phone_2_Value; // view contact "Phone_2_Value"
        cout<< "\n\tPhone_3_Value : "<<temp->Phone_3_Value; // view contact "Phone_3_Value"
        cout<< "\n\tPhone_4_Value : "<<temp->Phone_4_Value; // view contact "Phone_4_Value"
        cout<< "\n\tNickname : "<<temp->Nickname; // view contact "Nickname"
        cout<< "\n\tBirthday : "<<temp->Birthday; // view contact "Birthday"
        cout<< "\n\tGender : "<<temp->Gender; // view contact "Gender"
        cout<< "\n\tLocation : "<<temp->Location; // view contact "Location"
        cout<< "\n\tHobby : "<<temp->Hobby; // view contact "Hobby"
        cout<< "\n\tSensitivity : "<<temp->Sensitivity; // view contact "Sensitivity"
        cout<< "\n\tPriority : "<<temp->Priority; // view contact "Priority"
        cout<< "\n\tSubject : "<<temp->Subject; // view contact "Subject"
        cout<< "\n\tNotes : "<<temp->Notes; // view contact "Notes"
        cout<< "\n\tLanguage : "<<temp->Language; // view contact "Language"
        cout<< "\n\tGroup_Membership : "<<temp->Group_Membership; // view contact "Group_Membership"
        cout<< "\n\tEmail_1_Value : "<<temp->Email_1_Value; // view contact "Email_1_Value"
        cout<< "\n\tEmail_2_Value : "<<temp->Email_2_Value; // view contact "Email_2_Value"
        cout<< "\n\tOrganization_1_Name : "<<temp->Organization_1_Name; // view contact "Organization_1_Name"
        cout<< "\n\tOrganization_1_Title : "<<temp->Organization_1_Title; // view contact "Organization_1_Title"
        cout<< "\n\tOrganization_1_Department : "<<temp->Organization_1_Department; // view contact "Organization_1_Department"
        cout<< "\n\tOrganization_1_Location : "<<temp->Organization_1_Location; // view contact "Organization_1_Location"
        cout<< "\n\tOrganization_1_JobDescription : "<<temp->Organization_1_JobDescription; // view contact "Organization_1_JobDescription"
        cout<< "\n\tWebsite_1_Value : "<<temp->Website_1_Value; // view contact "Website_1_Value"
        cout<< "\n\n===========================\n";
        temp=temp->next;
    }
    cout<< "\n\t\tEnd of the List ! !\n\n";
    return;
}

void Contacts :: View(Node*&h) //استدعاء الدالة المسؤولة عن عرض جهات الأتصال
{
    int x;
    cout<< "\n1. View Names\n2. View details\n";
    cout<< "\nYour choice:";
    cin>>x;
    switch(x)
    {
    case 1:
        View_names(*&h); //الحالة الاولي عرض اسماء جهات الاتصال فقط
        break;
    case 2:
        View_details(*&h); //الحالة الثانية عرض جميع المعلومات المتعلقة بجهات الاتصال
        break;
    default :
        cout<< "Sorry ! Wrong Choice!!\n"; //رسالة تظهر عند ادخال المستخدم رقم ليس ضمن الخيارات
    }
    return ;
}

void Contacts::View_names(Node*&h) //انشاء الدالة المسؤولة عن عرض اسامي جهات الاتصال فقط
{
    int c=1;
    Node *ptr=h;
    if(ptr==0) //لو كانت القائمة فارغة
    {
        cout<< "\tList is Empty ! !\n"; 
        return ;
    }
    else //اذا لم تكن القائمة فارغة
    {
        cout<< "\n********* The List ********\n";
        while(ptr!=NULL)
        {
            cout<<c<<"\n. Full name : "<<ptr->name<< " "<<ptr->family<<endl; // اطبع الاسم الاول ملحوقا باسم العائلة في نفس السطر
            c++;
            ptr=ptr->next;
        }
        cout<< "\n\tEnd of the list ! !\n";
        return ;
    }
}

int Contacts::count_contacts(Node*&h) //انشاء دالة مهمتها القيام بعد جهات الاتصال
{
    int c=0;
    Node *C=h;
    if(C==NULL)
        return c;
    else
    {
        while(C!=NULL)
        {
            c++;
            C=C->next;
        }
    }
    return c;
}

void Contacts::Delete(Node *&h) //انشاء دالة الغرض منها تمكيين المستخدم من حذف جهة اتصال معينة
{
    int x;
    int n=count_contacts(*&h);
    Node *temp=h;
    if (n==0)
    {
        cout<< "\n************List is empty***********\n";
        return ;
    }
    View_names(*&h); //استدعاء دالة عرض جهات الاتصال
    cout<< "\n\nEnter the number of the name you want to delete : ";
    cin>> x;
    if(x<=0)
    {
        cout<< "Wrong Number!!"; //رسالة خطأ في حال ادخل المستخدم رقم خاطئ
        return ;
    }
    if(x>n)// the user entered a non contained number
    {
        cout<< "\n\t\tWrong Number\n";
        return ;
    }
    else if(x==1)//first element
    {
        if(n!=1)//check if there is more one element in the linked list
        {
            h=h->next;
            h->prev =NULL;
            delete temp;
        }
        else
        {
            h=NULL;
            delete temp;
        }
        cout<< "\n\n\t\tThe number deleted successfully ! !\n";
        return ;
    }
    //After this cases so the number is not in the start.
    for(int i=1; i<x; i++)
    {
        temp=temp->next;
    }
    if(x==n)//last element
    {
        temp->prev->next=NULL;
        delete temp;
    }
    else//the element is on the middle of the linked list
    {
        temp->prev->next=temp->next;
        temp->next->prev=temp->prev;
        delete temp;
    }
    cout<< "\n\t\tThe contact deleted successfully ! ! \n";
    return ;
}

void Contacts::viewOneContact(Node*&h) //انشاء دالة لعرض جهة اتصال واحدة
{
    int i;
    cout<< "\n*************************************************************\n";
    cout<< "\nName   : ";
    for(i=0; i<Size; i++)
    {
        cout<< h->name[i];
    }
    cout<<endl;
    cout<< "Family : ";
    for(i=0; i<Size; i++)
    {
        cout<< h->family[i];
    }
    cout<<endl;
    cout<< "Number : "<<h->number<<endl;
    cout<< "\n*************************************************************\n";
}

void Contacts::Search(Node*&h) //انشاء دالة مهمتها البحث في جهات الأتصال
{
    int x;
    if(h==NULL)
    {
        cout<< "\n**************The list is empty**********\n";
        return ;
    }
    cout<< "\n==>Do you want to search by ....\n";
    cout<< "\n1. Name\n2. Family\n3. Number\n4. First Character\n5. Character\n";
    cout<< "Enter your choice : ";
    cin>>x;
    switch(x)
    {
    case 1:
        searchByName(*&h); //استدعاء الدالة المسؤولة عن البحث باستخدام الأسم الأول
        break;
    case 2:
        SearchByFamily(*&h); //استدعاء الدالة المسؤولة عن البحث باستخدام أسم العائلة
        break;
    case 3:
        searchByNumber(*&h); //استدعاء الدالة المسؤولة عن البحث باستخدام الرقم
        break;
    case 4:
        searchByFirstChar(*&h); //استدعاء الدالة المسؤولة عن البحث باستخدام الحرف الاول في الأسم الأول
        break;
    case 5:
        searchByChar(*&h); //استدعاء الدالة المسؤولة عن البحث باستخدام أي حرف موجود في الأشم
        break;
    default :
        cout<< "\aWrong choice ! !"<<endl; //رسالة خطأ في حال أدخل المستخدم رقم خأطي
    }
    return ;
}

void Contacts::searchByFirstChar(Node *&h) //أستخدام دالة البحث بأستخدام الحرف الأول
{
    Node *temp=h;
    char ch;
    short int x=0;
    cout<< "\nEnter the first char : ";
    cin>>ch;
    while(temp!=NULL)
    {
        if(ch==temp->name[0])
        {
            viewOneContact(*&temp);
            x++;
        }
        else if(ch>temp->name[0])
            break;
        temp=temp->next;
    }
    if (x==0)
        cout<< "\nNot Found\n";
}

void Contacts::searchByNumber(Node*&h) //أستخدام دالة البحث بأستخدام الرقم
{
    Node *temp=h;
    string Number;
    int x=0;
    cout<< "\nEnter the Number : ";
    cin>>Number;
    while(temp!=NULL)
    {
        if(Number==temp->number)
        {
            viewOneContact(*&temp);
            x++;
            break;
        }
        temp=temp->next;
    }
    if (x==0)
        cout<< "\n\aNot Found\n";
}

void Contacts::searchByName(Node *&h) //استخدام دالة البحث بأستخدام الأسم الاول
{
    Node *temp=h;
    char name[Size]= {' '};
    int x=0;
    cout<< "\nEnter the Name : ";
    cin.ignore();
    cin.getline(name,Size);
    while(temp!=NULL)
    {
        if(Check(*&temp,name,1))
        {
            viewOneContact(*&temp);
            x++;
        }
        temp=temp->next;
    }
    if(x==0)
        cout<< "\nNot Found\n";
}

void Contacts::SearchByFamily(Node*&h) //استخدام دالة البحث بأستخدام أسم العائلة
{
    Node *temp=h;
    char name[Size]= {' '};
    int x=0;
    cout<< "\nEnter the Family name : ";
    cin.ignore();
    cin.getline(name,Size);
    while(temp!=NULL)
    {
        if(Check(*&temp,name,2))
        {
            viewOneContact(*&temp);
            x++;
        }
        temp=temp->next;
    }
    if(x==0)
        cout<< "\nNot Found\n";
}

void Contacts::searchByChar(Node*&h) //استخدام دالة البحث بأستخدام الحرف
{
    Node *temp=h;
    char ch;
    int x=0;
    cout<< "\nEnter Char : ";
    cin>>ch;
    while(temp!=NULL)
    {
        if(CheckChar(*&temp,ch))
        {
            viewOneContact(*&temp);
            x++;
        }
        temp=temp->next;
    }
    if(x==0)
        cout<< "\nNot Found\n";
}

bool Contacts::Check(Node*&h,char ch[Size],int z)//if z == 1 it will search by the name else by the family
{
    short int x=0;
    if(z==1)
    {
        for(int i=0; i<Size; i++)
        {
            if(!(ch[i]==h->name[i]))
            {
                x=1;
                break;
            }
        }
        if(x==1)
            return false;
        return true;
    }
    else
    {
        for(int i=0; i<Size; i++)
        {
            if(!(ch[i]==h->family[i]))
            {
                x=1;
                break;
            }
        }
        if(x==1)
            return false;
        return true;
    }

}
bool Contacts::CheckChar(Node*&h,char ch)
{
    for(int i=0; i<Size; i++)
    {
        if(ch==h->name[i])
        {
            return true;
        }
        else if(ch==h->family[i])
        {
            return true;
        }

    }
    return false;
}

void Contacts::Edit(Node*&h) //دالة مهمتها التعديل علي جهة الاتصال التي يريد المستخدم التعديل عليها
{
    Node *temp=h;
    int  x;
    short int y=count_contacts(*&h);
    View_names(*&h);
    if(y==0)
        return;
    cout<< "\nEnter the number of the name : ";
    cin>>x;
    if(x>y)
    {
        cout<< "\n\t\tWrong number ! !\n";
    }
    else
    {
        for(int i=1; i<x; i++)
        {
            temp=temp->next;
        }
        while(true)
        {
            cout<< "\n1. Name\n2. Family\n3. Phone_1_Value\n4. Phone_2_Value\n5. Phone_3_Value\n6. Phone_4_Value\n7. Nickname\n8. Birthday\n9. Gender\n10. Location\n11. Hobby\n12. Sensitivity\n13. Priority\n14. Subject\n15. Notes\n16. Language\n17. Group_Membership\n18. Email_1_Value\n19. Email_2_Value\n20. Organization_1_Name\n21. Organization_1_Title\n22. Organization_1_Department\n23. Organization_1_Location\n24. Organization_1_JobDescription\n25. Website_1_Value";
            cout<< "\nEnter your choice : ";
            cin>>x;
            switch(x)
            {
            case 1 :
                ClearName(*&temp);
                cout<< "\nName : ";
                cin.ignore();
                cin.getline(temp->name,Size); //التعديل علي الأسم الاول
                cout<< "\n\t\tSaved !\n";
                break;
            case 2:
                ClearFamily(*&temp);
                cout<< "\nFamily : ";
                cin.ignore();
                cin.getline(temp->family,Size); //التعديل علي أسم العائلة
                cout<< "\n\t\tSaved !\n";
                break;
            case 3:
                cout<< "Phone_1_Value : ";
                cin>>temp->Phone_1_Value; //التعديل علي الرقم الاول
                cout<< "\n\t\tSaved !\n";
            case 4:
                cout<< "Phone_2_Value : ";
                cin>>temp->Phone_2_Value; //التعديل علي الرقم الثاني
                cout<< "\n\t\tSaved !\n";
            case 5:
                cout<< "Phone_3_Value : ";
                cin>>temp->Phone_3_Value; //التعديل علي الرقم الثالث
                cout<< "\n\t\tSaved !\n";
            case 6:
                cout<< "Phone_4_Value : ";
                cin>>temp->Phone_4_Value; //التعديل علي الرقم الرابع
                cout<< "\n\t\tSaved !\n";
            case 7:
                cout<< "Nickname : ";
                cin>>temp->Nickname; //التعديل علي اللقب
                cout<< "\n\t\tSaved !\n";
            case 8:
                cout<< "Birthday : ";
                cin>>temp->Birthday; //التعديل علي تاريخ الميلاد
                cout<< "\n\t\tSaved !\n";
            case 9:
                cout<< "Gender : ";
                cin>>temp->Gender; //التعديل علي الجنس
                cout<< "\n\t\tSaved !\n";
            case 10:
                cout<< "Location : ";
                cin>>temp->Location; //التعديل علي الموقع
                cout<< "\n\t\tSaved !\n";
            case 11:
                cout<< "Hobby : ";
                cin>>temp->Hobby; //التعديل علي خانة الهواية
                cout<< "\n\t\tSaved !\n";
            case 12:
                cout<< "Sensitivity : ";
                cin>>temp->Sensitivity; //التعديل علي خانة الحساسية 
                cout<< "\n\t\tSaved !\n";
            case 13:
                cout<< "Priority : ";
                cin>>temp->Priority; //التعديل علي خانة الاولويات
                cout<< "\n\t\tSaved !\n";
            case 14:
                cout<< "Subject : ";
                cin>>temp->Subject; //التعديل علي خانة الموضوع
                cout<< "\n\t\tSaved !\n";
            case 15:
                cout<< "Notes : ";
                cin>>temp->Notes; //التعديل علي خانة الملاحظات
                cout<< "\n\t\tSaved !\n";
            case 16:
                cout<< "Language : ";
                cin>>temp->Language; //التعديل علي اللغة
                cout<< "\n\t\tSaved !\n";
            case 17:
                cout<< "Group_Membership : ";
                cin>>temp->Group_Membership; //التعديل علي القروب الخاص بجهة الاتصال
                cout<< "\n\t\tSaved !\n";
            case 18:
                cout<< "Email_1_Value : ";
                cin>>temp->Email_1_Value; //التعديل علي خانة البريد الالكتروني الأول
                cout<< "\n\t\tSaved !\n";
            case 19:
                cout<< "Email_2_Value : ";
                cin>>temp->Email_2_Value; //التعديل علي خانة البريد الألكتروني الثاني
                cout<< "\n\t\tSaved !\n";
            case 20:
                cout<< "Organization_1_Name : ";
                cin>>temp->Organization_1_Name; //التعديل علي اسم المنظمة
                cout<< "\n\t\tSaved !\n";
            case 21:
                cout<< "Organization_1_Title : ";
                cin>>temp->Organization_1_Title; //التعديل علي شعار المنظمة
                cout<< "\n\t\tSaved !\n";
            case 22:
                cout<< "Organization_1_Department : ";
                cin>>temp->Organization_1_Department; //التعديل علي خانة قسم المنظمة
                cout<< "\n\t\tSaved !\n";
            case 23:
                cout<< "Organization_1_Location : ";
                cin>>temp->Organization_1_Location; //التعديل علي خانة موقع المنظمة
                cout<< "\n\t\tSaved !\n";
            case 24:
                cout<< "Organization_1_JobDescription : ";
                cin>>temp->Organization_1_JobDescription; //التعديل علي وصف المنظمة
                cout<< "\n\t\tSaved !\n";
            case 25:
                cout<< "Website_1_Value : ";
                cin>>temp->Website_1_Value; //التعديل علي الموقع الالتروني الخاص بجهة الأتصال
                cout<< "\n\t\tSaved !\n";
            default :
                return;
            }
        }
    }
}


void Contacts::ClearName(Node *&h) //this functions clear the first name(Editing help function).
{
    for(int i=0; i<Size; i++)
        h->name[i]=' ';
}


void Contacts::ClearFamily(Node *&h) //this function clear the family name.
{
    for(int i=0; i<Size; i++)
        h->family[i]=' ';
}