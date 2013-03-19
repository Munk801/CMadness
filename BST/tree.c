#include <stdio.h>

typdef struct tree {
    int item;
    struct tree *parent;
    struct tree *left;
    struct tree *right;
} tree;


tree *search_tree(tree *l, int x)
{
    if (l == NULL) return (NULL);
    
    if (l->item == x) return(l);
    if (x < l->item)
        return (search_tree(l->left, x));
    else
        return (search_tree(l->right, x));
}

tree *find_minimum(tree *t)
{
    tree *min;
    
    if (t == NULL) return(NULL);
    
    min = t;
    while (min->left != NULL)
        min = min->left;
    return(min);
}

tree *find_maximum(tree *t)
{
    tree *max;
    
    if (t == NULL) return(NULL);
    
    max = t;
    while(max->right != NULL)
        max = max->right;
    return(max);
}