#include <iostream>

using namespace std;


int main()
{
    {
    int x ,z ;
    char y ;
    string key , message ;
    while(true){
        cout<<"*** Wlecome to XOR Cipher Program ***" <<endl;
        cout<<"Press 1 to Write the Message to Encrypte it..."<<endl;
        cout<<"Press 2 to Write Tne Encrypted Message to Decrypte it... "<<endl;
        cout<<"Press 3 if you want to End the Program... "<<endl;
        cin>>z;
        while(cin.fail()){
                cin.clear();
                cout<<"Please enter number:";
                cin>>z;
            }
        if(z==1)
        {
            cout<<" Enter The Key:";
            cin>>key;
            while(key.length()!=1){
                cout<<"This key should be one character"<<endl;
                cout<<"Enter key:";
                cin>>key;
            }
            cout<<"Please enter the message to cipher:";
             key[0]=(char)tolower(key[0]);
            for(int i=0 ; i<message.length() ; i++)
            {
                message[i]=(char)toupper(message[i]);
            }
            cout<<"Cipher text:";
            for(int i=0;i<message.length();++i)
            {
                y=message[i]^key[0];
                cout<< char (y) ;
            }
            cout<<endl;
            cout<<"Cipher Hexadecimal:";
            for(int i=0;i<message.length();++i)
            {
                x=(message[i]^key[0]);
                cout<<hex<<x;
            }
            cout<<endl;
        }
        else if(z==2)
        {
            cout<<"Please enter key:";
            cin>>key;
            while(key.length()!=1){
                cout<<"The key should be one character"<<endl;
                cout<<"Please Enter Key:";
                cin>>key;

            }
            cout<<"Please Enter the Message to Decipher:";
            key[0]=(char)tolower(key[0]);
            for(int i=0;i<message.length();i++)
            {
                message[i]=(char)toupper(message[i]);
            }
            cout<<"Message:";
            for(int i=0; i<message.length(); ++i)
            {
                y=message[i]^key[0];
                cout<< char (y) ;
            }
            cout<<endl;
        }
        else if(z==3)
        {
            cout<<"End"<<endl;
            cout<<"Goodbye"<<endl;
            break;
        }
        else
        {
            cout<<"Enter Right choise:";
        }
    }
    }

    return 0;
}
