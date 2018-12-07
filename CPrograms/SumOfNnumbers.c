//
//  SumOfNnumbers.c
//  CPrograms
//
//  Created by Ranjith Kumar on 12/8/18.
//  Copyright © 2018 DrawRect. All rights reserved.
//

#include "SumOfNnumbers.h"

void sumOfNnumbers() {
    int n[1000],i,l,total=0,j;
    printf("Enter your integer limit\n");
    scanf("%d",&l);
    printf("Enter your inputs one bye one:\n");
    for(i=0;i<l;i++) {
        scanf("%d",&n[i]);
    }

    for(j=0;j<l;j++) {
        total = total + n[j];
    }
    printf("Total: %d\n",total);

}
