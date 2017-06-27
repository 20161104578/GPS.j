//
//  main.c
//  GPS
//
//  Created by 20161104578 on 17/6/27.
//  Copyright © 2017年 20161104578. All rights reserved.
//

#include<stdlib.h>
#include<stdio.h>
int main()
{
   FILE *fr;
   char a[70];
   char b[70];
   char jingdu[10];
   char weidu[10];
   char time[10];
   char date[10];
    char haiba[6];

   int i,n;
  fr=fopen("//Users//c20161104578//Desktop//GPS170510.log","r");
if(fr==NULL)
        printf("文件打开失败！");
    fscanf(fr,"%s%s",a,b);
    for(i=0;i<9;i++)
        jingdu[i]=a[i+27];
    for(i=0;i<8;i++)
        weidu[i]=a[i+16];
    for(i=0;i<6;i++)
      time[i]=b[i+7];
  /*  n=0;
        n=ato(time);
        for(i=0;i<6;i++)
            
        */
    
    for(i=0;i<4;i++)
        haiba[i]=b[i+43];
   for(i=0;i<6;i++)
        date[i]=a[i+51];
        printf("经度：%s\n纬度：%s\n时间：%s\n日期：%s\n海拔:%s\n",jingdu,weidu,time,date,haiba);
        fclose(fr);
        return 0;
    
}
