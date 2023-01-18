#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Construct the node
typedef struct tree_node
{
    int              ID;
    char             *name;
    struct tree_node *left;
    struct tree_node *right;
} node_t;

void print_bst(node_t *node){
    if(node==NULL){
        printf("Tree is empty! \n");
        return;
    }
    if (node!=NULL) printf("%d %s: \t", node->ID, node->name);
    if (node->left != NULL) printf("L%d,", node->left->ID);
    if (node->right != NULL) printf("R%d,", node->right->ID);
    printf("\n");

    if (node->left != NULL)
        print_bst(node->left);
    if (node->right != NULL)
        print_bst(node->right);
}

void insert(node_t **node, int ID, char *name){
    if (*node == NULL){
        *node = (node_t*)malloc(sizeof(node_t));
        (**node).ID = ID;
        (**node).name = strdup(name);
        (**node).left = NULL;
        (**node).right = NULL;
    }
    else if ((*node)->ID > ID)
        insert(&(*node)->left, ID, name);
    else
        insert(&(*node)->right, ID, name);
}

void delete_tree(node_t **node){
    char *name;
    if (*node==NULL) return;
    delete_tree(&(*node)->left);
    delete_tree(&(*node)->right);
    name = (**node).name;
    free(name);
    free(*node);
    *node = NULL;
}

void search(node_t *node, int ID){
    char *name;
    // If the tree with the given ID does not exists
    if (!node) printf("The plant with ID '%d' does not exist!\n", &ID);
    // If the ID is less than the root ID, recursive call search with the left node
    else if (ID < node->ID){
        search(node->left, ID);
    }
    // Same as if the ID is greater than the root ID
    else if (ID > node->ID){
        search(node->right, ID);
    }
    // If we find the ID
    else{
        name = (*node).name;
        printf("Plant with ID '%d' has name: %s\n", ID, name);
    }
}


int main(int argc, char const *argv[]){
    node_t *root = NULL;
    printf("Inserting nodes to the binary tree...\n");

    // Inserting nodes to the tree
    insert(&root, 445, "sequoia");
    insert(&root, 162, "fir");
    insert(&root, 612, "baobab");
    insert(&root, 845, "spruce");
    insert(&root, 862, "rose");
    insert(&root, 168, "banana");
    insert(&root, 225, "orchid");
    insert(&root, 582, "chamomile"); 

    // Printing the tree
    printf("Pringting the tree.\n");
    print_bst(root);

    // Searching the tree
    search(root, 168);
    search(root, 467);
    
    // Deleting the tree
    printf("Deleting tree.\n");
    delete_tree(&root);

    // Print the (empty) tree
    print_bst(root);
    return 0;
}