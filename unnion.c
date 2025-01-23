#include <stdio.h>
int main()
{
    int set1[10], k1, set2[10], i, j, ch, k, setunion[20], n1, n2, boolean, setintersection[10], setdifference[10];
    printf("\nEnter no. of elements in set 1 : ");
    scanf("%d", &n1);
    printf("\nEnter %d elements in set 1\n", n1);
    for (i = 0; i < n1; i++)
        scanf("%d", &set1[i]);

    printf("\nEnter no. of elements in set 2 : ");
    scanf("%d", &n2);
    printf("\nEnter %d elements in set 2\n", n2);
    for (i = 0; i < n2; i++)
        scanf("%d", &set2[i]);
    printf("\n1.UNION\n2.INTERSECTION\n3.DIFFERENCE\n");
    printf("\nEnter choice!");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
        k = 0; // copy values of set1
        for (i = 0; i < n1; i++)
        {
            setunion[k] = set1[i];
            k++;
        }
        for (j = 0; j < n2; j++)
        {
            boolean = 1;
            for (i = 0; i < n1; i++)
            {
                if (set2[j] == set1[i])
                {
                    boolean = 0;
                    break;
                    j--;
                }
            }
            if (boolean)
            {
                setunion[k] = set2[j];
                k++;
            }
        }
        // for ( i = 0; i < n1; i++,k++)
        // {
        //     setunion[k]=set1[i];
        // }
        // for ( i = 0; i < n2; i++,k++)
        // {
        //     setunion[k]=set2[i];
        // }
        for (i = 0; i < n1; i++)
        {
            for (j = n1; j < k1; j++)
            {
                if (setunion[i] == setunion[j])
                {
                    for (k1 = j; k1 < k; k1++)
                        setunion[k] = setunion[k1];

                    k--;

                    printf("\n");
                    printf("\nSET UNION ");
                    for (i = 0; i < k; i++)
                    {
                        printf(" %d ", setunion[i]);
                    }
                    break;

                case 2:
                    k = 0;
                    for (i = 0; i < n1; i++)
                    {
                        for (j = 0; j < n2; j++)
                        {
                            if (set1[i] == set2[j])
                            {
                                setintersection[k] = set1[i];
                                k++;
                            }
                        }
                    }
                    printf("\nSET INTERSECTION ");
                    for (i = 0; i < k; i++)
                    {
                        printf(" %d ", setintersection[i]);
                    }

                    break;
                case 3:
                    k = 0;
                    for (i = 0; i < n1; i++)
                    {
                        boolean = 1;
                        for (j = 0; i < n2; j++)
                        {
                            if (set1[i] == set2[j])
                            {
                                boolean = 0;
                                break;
                            }
                        }
                        if (boolean)
                        {
                            setdifference[k] = set1[i];
                            k++;
                        }
                    }
                    printf("\nSET DIFFERENCE ");
                    for (i = 0; i < k; i++)
                    {
                        printf(" %d ", setdifference[i]);
                    }
                }
            }
        }

        return 0;
    }
}