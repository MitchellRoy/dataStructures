//
//  main.cpp
//  dataStructures
//
//  Created by Mitchell Roy on 2017-05-26.
//  Copyright © 2017 Mitchell Roy. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//*** Practice 1
char* reverseString(char *str){
    if (str){
        char *end = str + strlen(str) - 1;
        char *start = str;
        char temp;
        while(end > start){
            temp = *start;
            *start = *end;
            *end = temp;
            end--;
            start++;
        }
    }
    return str;
}

//*** Pratice 2
struct node {
    int data;
    struct node* left;
    struct node* right;
};

struct node* newNode(int data){
    struct node* node = (struct node*) malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    
    return node;
}

void printPostorder(struct node* node){
    if(node == NULL)
        return;
    
    printPostorder(node->left);
    printPostorder(node->right);
    printf("%d ", node->data);
}

void printInorder(struct node* node){
    if(node == NULL)
        return;
    
    printInorder(node->left);
    printf("%d ", node->data);
    printInorder(node->right);
}

void printPreorder(struct node* node){
    if(node == NULL)
        return;
    
    printf("%d ", node->data);
    printPreorder(node->left);
    printPreorder(node->right);
}

int sumTree(struct node* node){
    if(node == NULL)
        return 0;
    
    return node->data + sumTree(node->left) + sumTree(node->right);
}


int main(int argc, const char * argv[]) {
    printf("Hello, World!\n");
    
    //*** Practice 1: reverse string
    char s1[] = "Reverse me!";
    printf("The reversal of the string is: %s\n\n", reverseString(s1));
    
    //*** Practice 2: tree traversal
    struct node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(6);
    root->right->right = newNode(7);
    
    //              1
    //           2     3
    //         4  5   6  7
    
    printf("Preorder traversal of binary tree is \n");
    printPreorder(root);
    
    printf("\nInorder traversal of binary tree is \n");
    printInorder(root);
    
    printf("\nPostorder traversal of binary tree is \n");
    printPostorder(root);
    
    
    //*** Practice 3: Selection sort
    int n = 7;
    int intArray[7] = {4,6,3,2,1,9,7};
    int indexMin = 0;
    int temp = 0;
    
    for(int i=0; i<(n-1); i++){
        indexMin = i;
        
        for(int j=i+1; j<n; j++){
            if(intArray[j] < intArray[indexMin]){
                indexMin = j;
            }
        }
        
        temp = intArray[i];
        intArray[i] = intArray[indexMin];
        intArray[indexMin] = temp;
    }
    
    printf("\n\n");
    for(int k=0; k<n; k++){
        printf("%d ", intArray[k]);
    }
    
    return 0;
}

