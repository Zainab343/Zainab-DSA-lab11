#include <iostream>
using namespace std;

class Employee {
public:
    int empNum;      
    string name;     
    double salary;   

    Employee(int empNum, string name, double salary) {
        this->empNum = empNum;
        this->name = name;
        this->salary = salary;
    }

    void print() {
        cout << "Employee{Number: " << empNum << ", Name: " << name << ", Salary: " << salary << "}" << endl;
    }
};

class Node {
public:
    Employee* emp;    
    Node* left;       
    Node* right;     

    
    Node(Employee* emp) {
        this->emp = emp;
        this->left = nullptr;
        this->right = nullptr;
    }
};

class BinarySearchTree {
private:
    Node* root;  
    Node* insert(Node* node, Employee* emp) {
        if (node == nullptr) {
            return new Node(emp);
        }

        if (emp->empNum < node->emp->empNum) {
            node->left = insert(node->left, emp);
        } else {
            node->right = insert(node->right, emp);
        }

        return node;
    }

    Employee* search(Node* node, int empNum) {
        if (node == nullptr) return nullptr;

        if (empNum == node->emp->empNum) return node->emp;
        else if (empNum < node->emp->empNum) return search(node->left, empNum);
        else return search(node->right, empNum);
    }

    Node* minNode(Node* node) {
        while (node && node->left != nullptr) {
            node = node->left;
        }
        return node;
    }

    Node* deleteNode(Node* node, int empNum) {
        if (node == nullptr) return node;

       
        if (empNum < node->emp->empNum) {
            node->left = deleteNode(node->left, empNum);
        } else if (empNum > node->emp->empNum) {
            node->right = deleteNode(node->right, empNum);
        } else {
            
            if (node->left == nullptr) {
                Node* temp = node->right;
                delete node;
                return temp;
            } else if (node->right == nullptr) {
                Node* temp = node->left;
                delete node;
                return temp;
            }

            Node* temp = minNode(node->right);
            node->emp = temp->emp;
            node->right = deleteNode(node->right, temp->emp->empNum);
        }

        return node;
    }

   
    void inOrder(Node* node) {
        if (node != nullptr) {
            inOrder(node->left);
            node->emp->print();
            inOrder(node->right);
        }
    }

   
    void preOrder(Node* node) {
        if (node != nullptr) {
            node->emp->print();
            preOrder(node->left);
            preOrder(node->right);
        }
    }

    
    void postOrder(Node* node) {
        if (node != nullptr) {
            postOrder(node->left);
            postOrder(node->right);
            node->emp->print();
        }
    }

public:
  
    BinarySearchTree() {
        root = nullptr;
    }

    
    void insert(Employee* emp) {
        root = insert(root, emp);
    }

    Employee* search(int empNum) {
        return search(root, empNum);
    }

    
    void deleteEmployee(int empNum) {
        root = deleteNode(root, empNum);
    }

    
    void inOrder() {
        inOrder(root);
    }

    
    void preOrder() {
        preOrder(root);
    }

    
    void postOrder() {
        postOrder(root);
    }
};


int main() {
    BinarySearchTree bst;

    
    Employee* emp1 = new Employee(101, "Alice", 50000);
    Employee* emp2 = new Employee(102, "Bob", 55000);
    Employee* emp3 = new Employee(103, "Charlie", 60000);

   
    bst.insert(emp1);
    bst.insert(emp2);
    bst.insert(emp3);

    
    cout << "In-order traversal:" << endl;
    bst.inOrder();

    
    cout << "\nPre-order traversal:" << endl;
    bst.preOrder();

    
    cout << "\nPost-order traversal:" << endl;
    bst.postOrder();

    
    cout << "\nSearching for employee with number 103:" << endl;
    Employee* foundEmployee = bst.search(103);
    if (foundEmployee != nullptr) {
        foundEmployee->print();
    } else {
        cout << "Employee not found" << endl;
    }

    
    cout << "\nDeleting employee with number 102:" << endl;
    bst.deleteEmployee(102);

    
    cout << "\nIn-order traversal after deletion:" << endl;
    bst.inOrder();

    return 0;
}
