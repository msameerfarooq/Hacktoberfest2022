#include <stdio.h>
#include <stdlib.h>
struct poly
{
    int coef, pow;
    struct poly *nxt;
};
typedef struct poly poly;

int is_empty(poly *p)
{
    return p == NULL;
}

void append(int coef, int pow, poly **p)
{
    poly *n = (poly *)malloc(sizeof(poly));
    n->coef = coef;
    n->pow = pow;
    n->nxt = NULL;
    if (is_empty(*p))
        *p = n;
    else
    {
        poly *temp = *p;
        while (temp->nxt != NULL)
            temp = temp->nxt;
        temp->nxt = n;
    }
} // insertion at the end

void display(poly *p)
{
    if (p == NULL)
    {
        printf("\nEmpty Polynomial\n");
        return;
    }
    printf("%d", p->coef);
    if (p->pow != 0)
    {
        printf("x");
        if (p->pow != 1)
            printf("^%d", p->pow);
    }
    poly *temp = p->nxt;
    while (temp != NULL)
    {
        if (temp->coef > 0)
            printf("+");
        printf("%d", temp->coef);
        if (temp->pow != 0)
        {
            printf("x");
            if (temp->pow != 1)
                printf("^%d", temp->pow);
        }
        temp = temp->nxt;
    }
}

int main()
{
    int deg, coef, i;
    poly *p = NULL;
    printf("\nEnter the degree of the polynomial : ");
    scanf("%d", &deg);
    for (i = deg; i >= 0; i--)
    {
        printf("\nEnter the coefficient for power %d: ", i);
        scanf("%d", &coef);
        if (coef != 0)
            append(coef, i, &p);
    }
    printf("\nThe polynomial is : ");
    display(p);
    printf("\n\n");
    return 0;
}