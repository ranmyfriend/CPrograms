//
//  FloydTriangle.c
//  Nov28
//
//  Created by Ranjith Kumar on 12/8/18.
//  Copyright © 2018 DrawRect. All rights reserved.
//

#include "FloydTriangle.h"

void printFloydTraingle(int n) {
    int i,j,val=1;
    for (i=1; i<=n; i++) {
        for (j=1; j<=i; j++) {
            printf("%d ",val++);
        }
        printf("\n");
    }
}
