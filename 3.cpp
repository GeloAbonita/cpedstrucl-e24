#include <iostream>
using namespace std;
struct Tree{
char data;
Tree *left;
Tree *right;
Tree *parent;
};
Tree* lookUp(struct Tree *node, char key)
{
	if(node == NULL) return node;
	if(node->data == key) return node;
	else {
    if(node->data < key)
    return lookUp(node->right, key) ;
    else
    return lookUp(node->left, key);
}
}
Tree* leftMost(struct Tree *node)
{
if(node == NULL) return NULL;
while(node->left != NULL)
node = node->left;
return node;
}
struct Tree *newTreeNode(int data)
{
Tree *node = new Tree;
node->data = data;
node->left = NULL;
node->right = NULL;
node->parent = NULL;
return node;
}
struct Tree* insertTreeNode(struct Tree *node, int data)
{
static Tree *p;
Tree *retNode;
//if(node != NULL) p = node;

if(node == NULL)  {
    retNode = newTreeNode(data);
    retNode->parent = p;
    return retNode;
}
if(data <= node->data ) { 
    p = node;
    node->left = insertTreeNode(node->left,data);
} 
else {
    p = node;
    node->right = insertTreeNode(node->right,data);
} 
return node;
}
void printTreeInOrder(struct Tree *node)
{
if(node == NULL) return;
printTreeInOrder(node->left);
cout << node->data << " ";
printTreeInOrder(node->right);
}
void printTreePostOrder(struct Tree *node)
{
if(node == NULL) return;
printTreePostOrder(node->left);
printTreePostOrder(node->right);
cout << node->data << " ";
}
int main(int argc, char **argv)
{
char ch, ch1, ch2;
Tree found;
Tree succ;
Tree pred;
Tree *ancestor;
char charArr[9] = {'A','B','C','D','E','F','G','H','I'};
Tree *root = newTreeNode('F');
insertTreeNode(root,'B');
insertTreeNode(root,'A');
insertTreeNode(root,'D');
insertTreeNode(root,'C');  
insertTreeNode(root,'E');
insertTreeNode(root,'G');
insertTreeNode(root,'I');
insertTreeNode(root,'H');

/* print tree in order */
cout << "increasing sort order\n";
printTreeInOrder(root);
cout << endl;

/* print tree in postorder*/
cout << "post order \n";
printTreePostOrder(root);
cout << endl;


return 0;
}
