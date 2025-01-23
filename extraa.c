#include<stdio.h>

int main() {
    int set1[10], set2[10], i, j, ch, k, setunion[20], setintersect[10], setdiff[10], n1, n2, boolean;
    
    printf("\nEnter number of elements in set 1: ");
    scanf("%d", &n1);
    printf("\nEnter %d elements in set 1: ", n1);
    for (i = 0; i < n1; i++)
        scanf("%d", &set1[i]);
    
    printf("\nEnter number of elements in set 2: ");
    scanf("%d", &n2);
    printf("\nEnter %d elements in set 2: ", n2);
    for (i = 0; i < n2; i++)
        scanf("%d", &set2[i]);
    
    printf("\n1. UNION\n2. INTERSECTION\n3. DIFFERENCE\n");
    printf("\nEnter choice: ");
    scanf("%d", &ch);
    
    switch (ch) {
        case 1:  // UNION
            k = 0;  // Copy values of set1 to setunion
            for (i = 0; i < n1; i++) {
                setunion[k] = set1[i];
                k++;
            }

            for (j = 0; j < n2; j++) {
                boolean = 1;  // Assume element from set2 is not in set1
                for (i = 0; i < n1; i++) {
                    if (set2[j] == set1[i]) {
                        boolean = 0;  // Element from set2 is in set1, so no need to add
                        break;
                    }
                }
                if (boolean) {
                    setunion[k] = set2[j];
                    k++;
                }
            }

            printf("\nSet UNION: ");
            for (i = 0; i < k; i++) {
                printf("%d ", setunion[i]);
            }
            break;
        
        case 2:  // INTERSECTION
            k = 0;
            for (i = 0; i < n1; i++) {
                for (j = 0; j < n2; j++) {
                    if (set1[i] == set2[j]) {
                        setintersect[k] = set1[i];
                        k++;
                    }
                }
            }

            printf("\nSet INTERSECTION: ");
            if (k == 0)
                printf("No common elements");
            else
                for (i = 0; i < k; i++) {
                    printf("%d ", setintersect[i]);
                }
            break;
        
        case 3:  // DIFFERENCE
            k = 0;
            for (i = 0; i < n1; i++) {
                boolean = 1;  // Assume set1[i] is not in set2
                for (j = 0; j < n2; j++) {
                    if (set1[i] == set2[j]) {
                        boolean = 0;  // set1[i] is in set2, so it's not in the difference
                        break;
                    }
                }
                if (boolean) {
                    setdiff[k] = set1[i];
                    k++;
                }
            }

            printf("\nSet DIFFERENCE (set1 - set2): ");
            if (k == 0)
                printf("No unique elements in set1");
            else
                for (i = 0; i < k; i++) {
                    printf("%d ", setdiff[i]);
                }
            break;
        
        default:
            printf("\nInvalid choice!");
            break;
    }

    return 0;
}
