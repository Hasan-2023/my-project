#include<bits/stdc++.h>
using namespace std;

class User
{
private:
    string username, password;

public:
        User(string name, string  pass)
        {
            username = name;
            password = pass;
        }

        string getUsername()
        {
            return username;
        }

        string getpassword()
        {
            return password;
        }

};

class UserManager
{
private:
        vector<User>users;

public:
        void RegisterUser()
            {
                string username, password;
                cout<<"Enter User Name: "<<endl;
                cin>>username;

                cout<<"Enter password: "<<endl;
                cin>>password;

                User newUser(username, password);
                users.push_back(newUser);

                cout<<"\t\t User Register Successfully...."<<endl;
            }

            bool LoginUser(string name, string pass)
            {
                for(int i=0; i<users.size(); i++)
                {
                    if(users[i].getUsername() == name && users[i].getpassword() == pass)
                    {
                        cout<<"\t\tLogin Successfully..."<<endl;
                        return true;
                    }
                }

                cout<<"\t\tInvalid User name or Password..."<<endl;
                return false;
            }

            void showUser()
            {
                cout<<"\t\t---User List---"<<endl;
                for(int i=0; i<users.size(); i++)
                {
                    cout<<"\t\t"<<users[i].getUsername()<<endl;
                }
            }

            void searchUser(string username)
            {
                for(int i=0; i<users.size(); i++)
                {
                    if(users[i].getUsername() == username)
                    {
                         cout<<"\t\tUser found"<<endl;

                    }
                    else
                    {
                        cout<<"\t\tNot found"<<endl;
                    }
                }
            }

            void deleteUser(string username)
            {
                for(int i=0; i<users.size(); i++)
                {
                    if(users[i].getUsername() == username)
                    {
                        users.erase(users.begin()+i);
                        cout<<"Users Removed Successfully...."<<endl;
                    }
                }
            }

};

int main()
{
    UserManager usermanage;

    int op;
    string choice;
    do
    {
    system("cls");
    cout<<"\t\t 1.Register User "<<endl;
    cout<<"\t\t 2. Login "<<endl;
    cout<<"\t\t 3. Show User List "<<endl;
    cout<<"\t\t 4. Search User "<<endl;
    cout<<"\t\t 5. Delete User "<<endl;
    cout<<"\t\t 6. Enter Your choice: "<<endl;


    cin>>op;

    switch(op)
    {
    case 1:
        {
        usermanage.RegisterUser();
        break;
    }

    case 2:
        {
            string username, password;
            cout<<"\t\tEnter User: "<<endl;
            cin>>username;
            cout<<"\t\tEnter Password: "<<endl;
            cin>>password;
            usermanage.LoginUser(username, password);
            break;
        }
    case 3:
        {

        usermanage.showUser();
        break;
    }

    case 4:
        {
            string username;
            cout<<"\t\tEnter User Name: "<<endl;
            cin>>username;
            usermanage.searchUser(username);
            break;
        }

    case 5:
        string username;
        cout<<"\t\tEnter User Name: "<<endl;
        cin>>username;
        usermanage.deleteUser(username);
        break;

    }


cout<<"Do you want to continue [Yes/No]?"<<endl;
    cin>>choice;

}while(choice == "Yes" || choice == "yes" );
}
