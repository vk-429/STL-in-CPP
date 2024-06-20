#include<iostream>
#include<stack>
using namespace std;

int main()
{
    string s;
    cout<<"Enter the String : ";
    getline(cin,s);
    stack<string> st;
    string temp;
    for(int i=0;i<s.length();i++)
    {
        temp="";
        while(i<s.length() && s[i]!=' ')
        {
            temp+=s[i];
            i++;
        }
        if(temp != "")
            st.push(temp);
    }
    string ans="";
    while(!st.empty())
    {
        ans.append(st.top());
        st.pop();
        ans+=' ';
    }
    s=ans;
    cout<<s<<"\n";
    return 0;
}



/*

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char ip[4][20],temp[4][20];
    int i;
    printf("Enter the list of ip addresses : ");
    for(i=0;i<4;i++)
    {
        fgets(ip[i],20,stdin);
        ip[i][strlen(ip[i])-1]='\0';
        strcpy(temp[i],ip[i]);
    }
    char *a[4];
    int c[4]={0},flag=0;
    for(i=0;i<4;i++)
    {
        a[i]=strtok(ip[i],".");
        while(a[i]!=NULL)
        {
            int x=atoi(a[i]);
            if((x>=0)&&(x<=255))
                c[i]++;
            a[i]=strtok(NULL,".");
        }
        if(c[i]!=4)
        {
            printf("%s\n",temp[i]);
            flag++;
        }
    }
    if(flag==0)
        printf("All ip adresses are valid");
    return 0;
}

*/