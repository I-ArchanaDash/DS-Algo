//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x){
        data = x;
        left = NULL;
        right = NULL;
    }
};


// } Driver Code Ends
/* A binary tree node


struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/


   
class Solution
{
    public:
    void preorder(Node *root, vector<int> &v)
    {
        if(root!=NULL)
        {
            v.push_back(root->data);
            preorder(root->left,v);
            preorder(root->right,v);
        }
        else
        {
            v.push_back(100000);
        }
        
    }
    
    void inorder(Node *root, vector<int> &v)
    {
        if(root!=NULL)
        {
            inorder(root->left,v);
            v.push_back(root->data);
            inorder(root->right,v);
        }
        else
        {
            v.push_back(100000);
        }
    }
 
    //Function to check if two trees are identical.
    bool isIdentical(Node *r1, Node *r2)
    {
        //Your Code here
        vector<int> pre1, pre2, in1, in2;
	    preorder(r1,pre1);
	    preorder(r2,pre2);
	    
	    inorder(r1,in1);
	    inorder(r2,in2);
	    
	    if(pre1==pre2 && in1==in2)
	        return true;
	   return false;
        
    }
};

//{ Driver Code Starts.

// Function to Build Tree
Node *buildTree(string str) {
    // Corner Case
    if (str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;)
        ip.push_back(str);

    // Create the root of the tree
    Node *root = new Node(stoi(ip[0]));

    // Push the root to the queue
    queue<Node *> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node *currNode = queue.front();
        queue.pop();

        // Get the current node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N") {

            // Create the left child for the current node
            currNode->left = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N") {

            // Create the right child for the current node
            currNode->right = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}

int main() {
    int tc;
    scanf("%d ", &tc);
    while (tc--) {
        string str, str1;
        getline(cin, str);
        Node *rootA = buildTree(str);
        getline(cin, str1);
        Node *rootB = buildTree(str1);
        Solution ob;
        if (ob.isIdentical(rootA, rootB)) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
    return 0;
}
// } Driver Code Ends