#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream file("inputfile.txt");
    if(!file){
        cout<<"File not found!";
        return 0;
    }

    cout<<"Token detected:"<<endl;
    cout <<endl;

    char ch;
    string token="";
    int line=1;

    cout<<"Line "<<line<<":"<<endl;



    while(file.get(ch)){


        if(ch=='"'){
            string str="";
            str += ch;
            while(file.get(ch)){
                str += ch;
                if(ch=='"') break;
            }
            cout<<str<<" = string"<<endl;
        }


        else if(ch==' ' || ch=='\n' || ch==';' || ch=='(' || ch==')' || ch=='{' || ch=='}'
                || ch=='+' || ch=='-' || ch=='=' || ch=='*' || ch==',' || ch=='<' || ch=='>'){

          if(token!=""){

    bool keyword=false;
    if(token=="int" || token=="float" || token=="double" ||
       token=="if" || token=="else" || token=="return" ||
       token=="string" || token=="cout")
        keyword=true;

    if(keyword){
        cout << token << " = keyword" << endl;}

    else if(token[0] >= '0' && token[0] <= '9'){

        cout << token << " = constant" << endl;}

    else{
        cout << token << " = identifier" << endl;}

    token="";
}




if(ch=='<' || ch=='>'){
    char nextCh;
    if(file.get(nextCh)){
        if(nextCh == ch){
            cout << ch << ch << " = operator" << endl;
        }
        else {
            cout << ch << " = operator" << endl;
            token = nextCh;
        }
    }
    else {
        cout << ch << " = operator" << endl;
    }
    continue;
}


            if(ch=='+' || ch=='-' || ch=='=' || ch=='*')
                cout<<ch<<" = operator"<<endl;

            if(ch==';' || ch=='(' || ch==')' || ch=='{' || ch=='}' || ch==',')
                cout<<ch<<" = punctuation"<<endl;

            if(ch=='\n'){
                line++;
                cout<<endl<<"Line "<<line<<":"<<endl;
            }
        }

        else{
            token += ch;
        }
    }

    file.close();
}
