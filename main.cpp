//
//  main.cpp
//  array
//
//  Created by 20141105049 on 15/12/2.
//  Copyright © 2015年 20141105049. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    int a[4];
    int *p;
    a[0]=10;
    a[1]=20;
    a[2]=30;
    a[3]=40;
    p=a;
    printf("&a[0]=%x,&a[1]=%x,&a[2]=%x,&a[3]=%x,p=%x\n",a[0],a[1],a[2],a[3],p);
    printf("&a[0]=%d,&a[1]=%d,&a[2]=%d,&a[3]=%d,p=%d\n",a[0],a[1],a[2],a[3],p);
    return 0;
}
