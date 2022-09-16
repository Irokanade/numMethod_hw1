//
//  main.c
//  numMethod_hw1
//
//  Created by Michael Leong on 16/09/2022.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    double ub; //upperbound
    double lb; //lowerbound
    double mp; //midpoint
    
    printf("enter upper bound\n");
    scanf("%lf", &ub);
    printf("enter lower bound\n");
    scanf("%lf", &lb);
    
    mp = (ub+lb)/2;
    //printf("mp: %lf\n", mp);
    double ans = mp-cbrt(mp)-2;
    if(ans < 0) {
        lb = mp;
    } else if (ans > 0) {
        ub = mp;
    }
    //printf("ans: %lf\n", ans);
    
    
    int i = 0;
    while(!(fabs(ans) < 0.000000001)) {
        mp = (ub+lb)/2;
        //printf("mp: %lf\n", mp);
        ans = mp-cbrt(mp)-2;
        if(ans < 0) {
            lb = mp;
        } else if (ans > 0) {
            ub = mp;
        }
        //printf("ans: %lf\n", ans);
        i++;
    }
    
    printf("ub: %lf\n", ub);
    printf("lb: %lf\n", lb);
    
    
    return 0;
}
