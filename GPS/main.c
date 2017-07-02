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
    FILE *fp;
   char a[70];
   char b[70];
   char jingdu[10];
   char weidu[10];
   char time[10];
   char haiba[6];
   char nian[5];
    char yue[5];
    char ri[5];
    char sudu[5];
    char weixing[5];
   int i,n;
   fr=fopen("//Users//c20161104578//Desktop//sort2//GPS//GPS170510.log","r");
    fp=fopen("//Users//c20161104578//Desktop//sort2//GPS/1.csv","w");
    printf("经度,纬度,时间,日期,海拔,速度\n");
    fprintf(fp,"经度,纬度,时间,日期,海拔,速度,卫星\n");
    if(fr==NULL)
        printf("文件打开失败！");
    while(fscanf(fr,"%s %s",a,b)!=EOF)
    {
        for(i=0;i<9;i++)
            jingdu[i]=a[i+27];
        
        for(i=0;i<8;i++)
            weidu[i]=a[i+16];
        weidu[10]='/0';
        for(i=0;i<6;i++)
            time[i]=b[i+7];
        
        for(i=0;i<4;i++)
            haiba[i]=b[i+43];
        
        for(i=0;i<2;i++)
            ri[i]=a[i+51];
        
        for(i=0;i<2;i++)
            yue[i]=a[i+53];
        
        for(i=0;i<2;i++)
            nian[i]=a[i+55];
       
        for(i=0;i<2;i++)
            weixing[i]=b[i+39];
        
        for(i=0;i<5;i++)
            sudu[i]=a[i+39];
        n=atoi(sudu);
        n=n*1.852;
 
        printf("%s,",jingdu);
        printf("%s,",weidu);
        printf("%s,",time);
        printf("%s年",nian);
        printf("%s月",yue);
        printf("%s日,",ri);
        printf("%s,",haiba);
        printf("%d千米/时,",n);
        printf("%s颗\n",weixing);
        fprintf(fp,"%s,",jingdu);
        fprintf(fp,"%s,",weidu);
        fprintf(fp,"%s,",time);
        fprintf(fp,"%s年",nian);
        fprintf(fp,"%s月",yue);
        fprintf(fp,"%s日,",ri);
        fprintf(fp,"%s,",haiba);
        fprintf(fp,"%d千米/时,",n);
        fprintf(fp,"%s颗\n",weixing);
    }
    fclose(fr);
    fclose(fp);
    return 0;
    
}
