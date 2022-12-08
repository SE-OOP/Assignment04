#include <iostream>
#include <bits/stdc++.h>

#include"Point.h"
using namespace std;
//构造函数
Point::Point(double pon1_x, double pon1_y, double pon2_x, double pon2_y, double pon3_x, double pon3_y, double pon4_x, double pon4_y)
{
    double point[4][2];
    int i, j;
    //将点的值存入数组
    double len = 1, wid = 1;
    point[0][0] = pon1_x;
    point[0][1] = pon1_y;
    point[1][0] = pon2_x;
    point[1][1] = pon2_y;
    point[2][0] = pon3_x;
    point[2][1] = pon3_y;
    point[3][0] = pon4_x;
    point[3][1] = pon4_y;
    //判断是否在第一象限
    if(pon1_x > 0&&pon1_y > 0, pon2_x > 0&&pon2_y > 0, pon3_x > 0&&pon3_y > 0, pon4_x > 0&&pon4_y > 0){
    //对点排序
    for(i = 0;i < 3; i++ )
    {
        for(j = 0; j < 3;j++ )
        {
            if(point[j][0]>=point[j+1][0]){
                if(point[j][0]>point[j+1][0]){

                    swap(point[j][0],point[j+1][0]);
                    swap(point[j][1],point[j+1][1]);
                }
                else
                {
                    if(point[j][1]>point[j+1][1]){
                        swap(point[j][0],point[j+1][0]);
                        swap(point[j][1],point[j+1][1]);
                    }
                }
            }
        }
    }
    //判断是否与坐标轴平行
    if(point[0][0]==point[1][0]&&point[0][1]==point[2][1]&&point[2][0]==point[3][0]&&point[1][1]==point[3][1]){
        if((point[3][0]-point[0][0])>(point[3][1]-point[2][1])){
            len = point[3][0]-point[0][0];
            wid = point[3][1]-point[2][1];
        }
        else
        {
            wid = point[3][0]-point[0][0];
            len = point[3][1]-point[2][1];
        }
        flag = 1;
    }
    else{
        double len1, len2, len3, len4;
        double g1, g2;
        double det1, det2;
        //用勾股定理证明
        len1 = pointLen(point[3][0],point[3][1],point[2][0],point[2][1]);
        len2 = pointLen(point[3][0],point[3][1],point[1][0],point[1][1]);
        len3 = pointLen(point[2][0],point[2][1],point[0][0],point[0][1]);
        len4 = pointLen(point[1][0],point[1][1],point[0][0],point[0][1]);
        g1 = pointLen(point[3][0],point[3][1],point[0][0],point[0][1]);
        g2 = pointLen(point[2][0],point[2][1],point[1][0],point[1][1]);
        if(g1 == g2)
        {
            det1 = sqrt(len1*len1+len2*len2);
            det2 = sqrt(len3*len3+len4*len4);
            //cout<<"this"<<det1<<" "<<det2<<" "<<g1<<endl;
            if(det1 == det2&&det1 == g1)
            {
                if(len1>len2)
                {
                    len = len1;
                    wid = len2;
                    //cout<<"OK"<<endl;
                }
                else
                {
                    wid = len1;
                    len = len2;
                }
                flag = 1;
            }
            else
               flag = 0;
        }
        else
            flag = 0;
    }
    }
    else
        flag = 0;
    len1 = len;
    wid1 = wid;
}
//工具函数，返回两点之间距离
double Point::pointLen(double pon1_x, double pon1_y, double pon2_x, double pon2_y)
{
    double ans;
    ans = sqrt((pon1_x-pon2_x)*(pon1_x-pon2_x)+(pon1_y-pon2_y)*(pon1_y-pon2_y));
    return ans;
}
