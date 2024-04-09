#include <iostream>
#include <vector>
#include <queue>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* createNode(int value) {
    Node* newNode = new Node();
    if (!newNode) {
        cout << "Error creating node!" << endl;
        return NULL;
    }
    newNode->data = value;
    newNode->left = newNode->right = NULL;
    return newNode;
}

void levelOrderTraversal(Node* root) {
    if (!root)
        return;

    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        int size = q.size();

        for (int i = 0; i < size; i++) {
            Node* current = q.front();
            q.pop();

            cout << current->data << " ";

            if (current->left)
                q.push(current->left);
            if (current->right)
                q.push(current->right);
        }
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<Node*> nodes(n);
        for (int i = 0; i < n; i++) {
            int value;
            cin >> value;
            if (value != -1)
                nodes[i] = createNode(value);
        }

        for (int i = 0; i < n; i++) {
            if (nodes[i] == NULL)
                continue;

            int leftIdx = 2 * i + 1;
            int rightIdx = 2 * i + 2;

            if (leftIdx < n)
                nodes[i]->left = nodes[leftIdx];
            if (rightIdx < n)
                nodes[i]->right = nodes[rightIdx];
        }

        levelOrderTraversal(nodes[0]);
        cout << endl;
    }

    return 0;
}