# Chapter 18 - Writing Linked Lists

---

## Concept
&nbsp;&nbsp;&nbsp;&nbsp;
Linked Lists make use of structs and pointers to make what is called a 
**Node**. Each node would contain data and a pointer to a different node. 
At the start of each Linked List is a pointer that points to the first 
item called the Head Node. To add a node, you allocate memory the size 
of the node and make a node in the list point to that new node.

#####

![Concept of Linked Lists Figure](:/img/images/Ch18_1.png)

#####

&nbsp;&nbsp;&nbsp;&nbsp;
The end of the linked list will point to NULL to indicate that it is 
the last item since there aren’t any items following that Node. Nodes 
can be inserted, appended, and deleted easily as all you have to do is 
rearrange the Node Pointers to ignore or add a certain Node. Since the 
nodes are groups of data and node pointers, we use structs to make it.

#####

---

#####

## Nodes

&nbsp;&nbsp;&nbsp;&nbsp;
Each node consists of a Node pointer and data. The Node pointer’s data 
type is that of a pointer of a struct of itself:

    typedef struct Node {
            int data;
            struct Node *nextNode;
    } Node;

######

&nbsp;&nbsp;&nbsp;&nbsp;
The nextNode pointer will point to the next Node item in the list. 
This way, we can access the data within a node by traversing through 
the list. If you have multiple data for each node, it's best to keep 
them in its own structure to avoid confusion and overlap between nodes 
and data.

######

    typedef struct person {
            char name[30];
            int age;
    } person;
     
    typedef struct Node {
            person data;
            struct Node *nextNode;
    } Node;

#####

---

#####

## Implementation

&nbsp;&nbsp;&nbsp;&nbsp;
To create our linked list, we first need to allocate memory for the 
first node and connect it to the head node pointer.

######

    typedef struct Node {
            int data;
            struct Node *nextNode;
    } Node;
     
    int main() {
            Node *head;	// declaring a head pointer
            head = (Node *) malloc(sizeof(Node));	// creating a new Node
            if (!head) {
                    printf("Memory Allocation Error\n");
                    return -1;
    }
     
    free(head);
    }

######

&nbsp;&nbsp;&nbsp;&nbsp;
This creates a new Node at head which is our first node. However, this 
Node is still initialized. To make more Nodes, we can use functions and 
memory allocation to link the new nodes to previous nodes.

#####

    typedef struct Node {
            int data;
            struct Node *nextNode;
    } Node;
     
    Node *createNode(int data);
    void printlist(Node *head);
    void freelist(Node *head);
     
    int main() {
            Node *head;	
            head = createNode(11);
            if (!head) {
                    printf("Memory Allocation Error\n");
                    return -1;
    }
     
    // to navigate to the next nodes and place a node there
    Node *nav = head;
     
    // checks if the next Node is empty or not
    while (nav->nextNode != NULL) {
            nav = nav->nextNode;	// moves to the next node
    // the loop will stop once it reaches the last node
    }
     
    nav->next = createNode(21);	// makes a new node to the next node of nav
     
    printlist(head);	// function for printing list contents
     
    freelist(head);	// function to free the linked list 
    }
     
    Node *createNode(int data) {
            Node *newNode = (Node *) malloc(sizeof(Node));
            newNode->data = data;		// initializing data
            newNode->nextNode = NULL;	// initializing the Node pointer
            return newNode;
    }
     
    void printlist(Node *head) {
    // temporary node for navigation, only temp will move
    Node *temp = head;
     
    // keeps printing until it reaches the last node which is NULL
    while (temp != NULL) {
    printf("%d\n", temp->data);
            temp = temp->nextNode;
    }
    }
     
    void freelist(Node *head) {
            // temporary node for navigation
            Node *temp = head;
            while (head != NULL) {
                    // it will make temp go to the next node
                    temp = temp->nextNode;
                    // free the Node head is pointing at
                    free(head);
                    // assigns the next node to the head now
                    head = temp;
     
                    // loop will stop until all nodes have been freed and head becomes NULL/empty
            }
    }
     
    Output:
    11
    21

#####

> We make a temporary Node pointer to navigate through the linked list. 
We can see that in the printlist and freelist functions where we have a 
Node pointer named temp to go through the list and point to each node.

#####

---

#####

## Traversal

&nbsp;&nbsp;&nbsp;&nbsp;
We make use of an outside Node pointer variable when we want to 
traverse the linked list. As much as possible, don’t use the head 
pointer as that should remain unchanged unless freeing the data. 
If you want to insert data in between the nodes, use a temporary 
pointer to point at the node you want to put the new node after, 
assign the address that pointer is pointing at to the new Node’s 
pointer and point that node to the new Node.

#####

![Adding a new node in a list](:/img/images/Ch18_2.png)

#####

> Deleting is the same process but instead of creating a new node, we free it.

#####

&nbsp;&nbsp;&nbsp;&nbsp;
Additionally, there are two other kinds of linked lists. The one shown 
is called a Singly Linked List, where there is only one node pointer 
that points to the next node. In Singly Linked Lists, the last node 
would point to NULL, but there is a linked list called a Circular 
Linked List whose final item points to the head, forming a loop. 
There are also Doubly Linked Lists which have both a back and next 
pointer.

######

    typedef struct Node {
            int data;
            struct Node *next;
            struct Node *back;
    } Node;

######

&nbsp;&nbsp;&nbsp;&nbsp;
These nodes make it easier to traverse as you can go back and forth 
within the list, but it is more tiring and confusing to implement as 
there will be a lot of pointers pointing around. Use whatever kind of 
Linked List fits your situation as they all have their advantages in 
certain scenarios.

#####

---

#####

### References:
- https://www.programiz.com/dsa/linked-list
