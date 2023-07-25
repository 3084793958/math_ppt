#include<unistd.h>
#include<stdio.h>
#include<iostream>
using namespace std;
int getRand(int min,int max);
int getRand(int min,int max)
{
    return (rand()%(max-min+1))+min;
}
int main()
{
    srand(static_cast<unsigned int>(time(nullptr)));
    int A_number=0;
    int B_number=0;
    int C_number=0;
    int D_number=0;
    int number=0;
    int s_age;
    int number_class;
    int s_tall;
    int s_widget;
    int long_running_m;
    int long_running_s;
    int other_;
    float running_50m;
    int fhl;
    for(number_class=1;number_class<=4;number_class++)
    {
        for(int i=0;i<5;i++)//boy
        {
            number++;
            s_age=getRand(12,13);
            s_tall=getRand(163,185);
            s_widget=getRand(40,70);
            long_running_m=getRand(3,4);
            if (long_running_m==3)
            {
                long_running_s=getRand(0,59);
            }
            else
            {
                long_running_s=getRand(0,30);
            }
            other_=getRand(5,25);
            running_50m=float(getRand(55,104))/10;
            fhl=getRand(2000,4000);
            float tall_widget=float(s_widget)/(float(s_tall)/100)/(float(s_tall)/100);
            float fhl_w=float(fhl)/s_widget;
            int all_points=0;
            if ((tall_widget>18.2f)and(tall_widget<23.9f))
            {
                all_points+=10;
            }
            else if (tall_widget<18.2f)
            {
                if (10-(18.2f-tall_widget)*10<0)
                {
                    ;
                }
                else
                {
                    all_points+=int(10-(18.2f-tall_widget)*10);
                }
            }
            else if (tall_widget>23.9f)
            {
                if (10-(tall_widget-23.9f)*10<0)
                {
                    ;
                }
                else
                {
                    all_points+=int(10-(tall_widget-23.9f)*10);
                }
            }
            if (fhl_w>=80)
            {
                all_points+=20;
            }
            else
            {
                all_points+=int(fhl_w/4);
            }
            int all_long_running=long_running_m*60+long_running_s;
            if (all_long_running<=228)
            {
                all_points+=30;
            }
            else if (all_long_running>=340)
            {
                ;
            }
            else
            {
                all_points+=(340-all_long_running)*30/122;
            }
            if (other_>=20)
            {
                all_points+=20;
            }
            else if (other_<1)
            {
                ;
            }
            else
            {
                all_points+=other_;
            }
            if (running_50m<=7.2f)
            {
                all_points+=20;
            }
            else if (running_50m>=10.1f)
            {
                ;
            }
            else
            {
                all_points+=int((10.1f-running_50m)*20/3);
            }
            cout<<"编号:"<<number<<endl;
            cout<<"班级:70"<<number_class<<endl;
            cout<<"年龄:"<<s_age<<endl;
            cout<<"性别:男"<<endl;
            cout<<"身高cm:"<<s_tall<<endl;
            cout<<"体重kg:"<<s_widget<<endl;
            cout<<"肺活量:"<<fhl<<endl;
            cout<<"长跑:"<<long_running_m<<":"<<long_running_s<<endl;
            cout<<"引体向上:"<<other_<<endl;
            cout<<"50米跑:"<<running_50m<<endl;
            cout<<"----------"<<endl;
            cout<<"总分:"<<all_points<<endl;
            cout<<"=========="<<endl;
            if (all_points>=90)
            {
                A_number++;
            }
            else if (all_points>=75)
            {
                B_number++;
            }
            else if (all_points>=60)
            {
                C_number++;
            }
            else
            {
                D_number++;
            }
        }
        for(int i=0;i<5;i++)//not boy
        {
            number++;
            s_age=getRand(12,13);
            s_tall=getRand(152,175);
            s_widget=getRand(35,65);
            long_running_m=getRand(3,4);
            if (long_running_m==3)
            {
                long_running_s=getRand(0,59);
            }
            else
            {
                long_running_s=getRand(0,15);
            }
            other_=getRand(35,60);
            running_50m=float(getRand(70,120))/10;
            fhl=getRand(1800,3500);
            float tall_widget=float(s_widget)/(float(s_tall)/100)/(float(s_tall)/100);
            float fhl_w=float(fhl)/s_widget;
            int all_points=0;
            if ((tall_widget>18.2f)and(tall_widget<23.9f))
            {
                all_points+=10;
            }
            else if (tall_widget<18.2f)
            {
                if (10-(18.2f-tall_widget)*10<0)
                {
                    ;
                }
                else
                {
                    all_points+=int(10-(18.2f-tall_widget)*10);
                }
            }
            else if (tall_widget>23.9f)
            {
                if (10-(tall_widget-23.9f)*10<0)
                {
                    ;
                }
                else
                {
                    all_points+=int(10-(tall_widget-23.9f)*10);
                }
            }
            if (fhl_w>=71)
            {
                all_points+=20;
            }
            else
            {
                all_points+=int(fhl_w*20/71);
            }
            int all_long_running=long_running_m*60+long_running_s;
            if (all_long_running<=205)
            {
                all_points+=30;
            }
            else if (all_long_running>=330)
            {
                ;
            }
            else
            {
                all_points+=(330-all_long_running)*30/125;
            }
            if (other_>=50)
            {
                all_points+=20;
            }
            else if (other_<16)
            {
                ;
            }
            else
            {
                all_points+=other_*20/50;
            }
            if (running_50m<=8.1f)
            {
                all_points+=20;
            }
            else if (running_50m>=10.8f)
            {
                ;
            }
            else
            {
                all_points+=int((10.8f-running_50m)*20/3);
            }
            cout<<"编号:"<<number<<endl;
            cout<<"班级:70"<<number_class<<endl;
            cout<<"年龄:"<<s_age<<endl;
            cout<<"性别:女"<<endl;
            cout<<"身高cm:"<<s_tall<<endl;
            cout<<"体重kg:"<<s_widget<<endl;
            cout<<"肺活量:"<<fhl<<endl;
            cout<<"长跑:"<<long_running_m<<":"<<long_running_s<<endl;
            cout<<"仰卧起坐:"<<other_<<endl;
            cout<<"50米跑:"<<running_50m<<endl;
            cout<<"----------"<<endl;
            cout<<"总分:"<<all_points<<endl;
            cout<<"=========="<<endl;
            if (all_points>=90)
            {
                A_number++;
            }
            else if (all_points>=75)
            {
                B_number++;
            }
            else if (all_points>=60)
            {
                C_number++;
            }
            else
            {
                D_number++;
            }
        }
    }
    cout<<"优秀:"<<A_number<<"|"<<"百分比:"<<(float(A_number)/40)*100<<"%"<<endl;
    cout<<"良好:"<<B_number<<"|"<<"百分比:"<<(float(B_number)/40)*100<<"%"<<endl;
    cout<<"及格:"<<C_number<<"|"<<"百分比:"<<(float(C_number)/40)*100<<"%"<<endl;
    cout<<"不及格:"<<D_number<<"|"<<"百分比:"<<(float(D_number)/40)*100<<"%"<<endl;
    return 0;
}

