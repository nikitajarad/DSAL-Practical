#include <iostream>
#include <stack>
using namespace std;

// Node structure for the expression tree
class Node {
public:
    char data;
    Node* left;
    Node* right;
};

// Function to check if a character is an operator
bool isOperator(char c) {
    if (c == '+' || c == '-' || c == '*' || c == '/')
        return true;
    return false;
}

// Function to construct an expression tree from a prefix expression
Node* constructExpressionTree(string prefix) {
    stack<Node*> stk;
    int length = prefix.length();

    // Traverse the prefix expression from right to left
    for (int i = length - 1; i >= 0; i--) {
        char c = prefix[i];

        // If the character is an operator
        if (isOperator(c)) {
            Node* newNode = new Node;
            newNode->data = c;
            newNode->left = stk.top();
            stk.pop();
            newNode->right = stk.top();
            stk.pop();
            stk.push(newNode);
        }
        // If the character is an operand
        else {
            Node* newNode = new Node;
            newNode->data = c;
            newNode->left = NULL;
            newNode->right = NULL;
            stk.push(newNode);
        }
    }

    // The remaining item in the stack will be the root of the expression tree
    return stk.top();
}

// Function to traverse the expression tree using post-order traversal (non-recursive)
void postOrderTraversal(Node* root) {
    if (root == NULL)
        return;

    stack<Node*> stk1;
    stack<Node*> stk2;
    stk1.push(root);

    // Perform post-order traversal using two stacks
    while (!stk1.empty()) {
        Node* temp = stk1.top();
        stk1.pop();
        stk2.push(temp);

        if (temp->left)
            stk1.push(temp->left);
        if (temp->right)
            stk1.push(temp->right);
    }

    // Print the elements in post-order
    while (!stk2.empty()) {
        Node* temp = stk2.top();
        stk2.pop();
        cout << temp->data << " ";
        delete temp;
    }
}



int main() {
    /*string prefix;
    cout<<"Enter prefix string:";
    cin>>prefix;
    */
    string prefix = "+--a*bc/def";
    cout<<"Given tree is ";
    cout<<prefix;
    // Construct the expression tree
    Node* root = constructExpressionTree(prefix);

    // Traverse the expression tree using post-order traversal (non-recursive)
    cout << "\n Post-order traversal: ";
    postOrderTraversal(root);
    cout << endl;


    return 0;
}
