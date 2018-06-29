//
//  main.cpp
//  test629
//
//  Created by 李晨曦 on 2018/6/29.
//  Copyright © 2018年 李晨曦. All rights reserved.
//

#include<iostream>
using namespace std;
int max (int x,int y);
int min (int x,int y);
int main()
{
    int a=0,b=101,c=0,i,j;
    double average;
    cout<<"请输入选手成绩"<<endl;
    for(i=1;i<=10;i++)
    {
        cout<<"第"<<i<<"位评委给分：";
        cin>>j;
        a=max(a,j);
        b=min(b,j);
        c=c+j;
    }
    average=(c-a-b)/8;
    cout<<"减去一个最高分"<<a<<","<<"减去一个最低分"<<b<<endl;
    cout<<"该选手的最后得分："<<average<<endl;
    return 0;
}

int max(int x, int y)
{
    if(x>y)
    {
        return x;
    }
    else
    {
        return y;
    }
}

int min(int x, int y)
{
    if(x>y)
    {
        return y;
    }
    else
    {
        return x;
    }    
}    
